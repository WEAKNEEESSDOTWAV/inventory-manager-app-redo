#include "dbConnect.h"

using namespace System::Configuration;

NS_Models::dbConnect::dbConnect(void)
{
	ConnectionStringSettings^ connectionStringSettings = ConfigurationManager::ConnectionStrings["DefaultConnectionString"];
	this->connectionString = connectionStringSettings->ConnectionString;

	this->queryString = "";

	this->connection = gcnew System::Data::SqlClient::SqlConnection(this->connectionString);
	this->command = gcnew System::Data::SqlClient::SqlCommand(this->queryString, this->connection);
	this->adapter = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->dataSet = gcnew System::Data::DataSet();

	this->command->CommandType = System::Data::CommandType::Text;
}
System::Data::DataSet^ NS_Models::dbConnect::getRows(System::String^ queryString, System::String^ tableName)
{
	this->dataSet->Clear();
	this->queryString = queryString;
	this->command->CommandText = this->queryString;
	this->adapter->SelectCommand = this->command;
	this->adapter->Fill(this->dataSet, tableName);

	return this->dataSet;
}
void NS_Models::dbConnect::actionRows(System::String^ sSql)
{
	this->queryString = sSql;
	this->command->CommandText = this->queryString;
	this->adapter->SelectCommand = this->command;
	this->connection->Open();
	this->command->ExecuteNonQuery();
	this->connection->Close();
}