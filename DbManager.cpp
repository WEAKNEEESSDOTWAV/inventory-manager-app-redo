#include "DbManager.h"

using namespace System::Configuration;

namespace Models {

	DbManager::DbManager()
	{
		ConnectionStringSettings^ connectionStringSettings = ConfigurationManager::ConnectionStrings["DefaultConnectionString"];
		this->connectionString = connectionStringSettings->ConnectionString;

		this->queryString = "";

		this->connection = gcnew System::Data::SqlClient::SqlConnection(this->connectionString);
		this->command = gcnew System::Data::SqlClient::SqlCommand(this->queryString, this->connection);
		this->adapter = gcnew System::Data::SqlClient::SqlDataAdapter();
		this->dataSet = gcnew System::Data::DataSet();

		this->command->CommandType = System::Data::CommandType::Text;

		this->tableNames = gcnew List<String^>();
		this->tableNames = this->GetTableNames();

		this->columnNames = gcnew Dictionary<String^, List<String^>^>();
	}
	System::Data::DataSet^ DbManager::getRows(System::String^ queryString, System::String^ tableName)
	{
		this->dataSet->Clear();
		this->queryString = queryString;
		this->command->CommandText = this->queryString;
		this->adapter->SelectCommand = this->command;
		this->adapter->Fill(this->dataSet, tableName);

		return this->dataSet;
	}
	void DbManager::actionRows(System::String^ queryString)
	{

		this->queryString = queryString;
		this->command->CommandText = this->queryString;
		this->adapter->SelectCommand = this->command;

		try
		{
			this->connection->Open();
			this->command->ExecuteNonQuery();
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error: {0}", ex->Message);
		}
		finally
		{
			this->connection->Close();
		}

	}

	List<String^>^ DbManager::GetColumnNames(String^ tableName) {

		if (this->columnNames[tableName]->Count == 0) {
			return this->columnNames[tableName];
		}

		try
		{
			this->connection->Open();

			DataTable^ schemaTable = this->connection->GetSchema("Columns", gcnew array<String^> { nullptr, nullptr, tableName });
			List<String^>^ columnNames = gcnew List<String^>();

			for each (DataRow^ row in schemaTable->Rows)
			{
				String^ columnName = safe_cast<String^>(row["COLUMN_NAME"]);
				columnNames->Add(columnName);
				this->columnNames->Add(tableName, columnNames);
			}
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error: {0}", ex->Message);
		}
		finally
		{
			connection->Close();
		}

		return this->columnNames[tableName];

	}

	List<String^>^ DbManager::GetTableNames() {

		if (this->tableNames->Count == 0) {
			return this->tableNames;
		}

		try
		{
			this->connection->Open();

			SqlCommand^ command = gcnew SqlCommand("SELECT TABLE_NAME FROM information_schema.tables WHERE table_type = 'BASE TABLE'", this->connection);
			SqlDataReader^ reader = command->ExecuteReader();

			while (reader->Read())
			{
				String^ tableName = safe_cast<String^>(reader["TABLE_NAME"]);
				tableNames->Add(tableName);
			}

			reader->Close();
		}
		catch (Exception^ ex)
		{
			Console::WriteLine("Error: {0}", ex->Message);
		}
		finally
		{
			connection->Close();
		}

		return this->tableNames;

	}

}