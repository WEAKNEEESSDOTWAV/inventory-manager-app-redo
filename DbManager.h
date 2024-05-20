#pragma once
#include "pch.h"

using namespace System::Collections::Generic;

namespace Models {
	ref class DbManager
	{
	private:
		System::String^ queryString;
		System::String^ connectionString;
		System::Data::SqlClient::SqlConnection^ connection;
		System::Data::SqlClient::SqlCommand^ command;
		System::Data::SqlClient::SqlDataAdapter^ adapter;
		System::Data::SqlClient::SqlDataReader^ reader;
		System::Data::DataSet^ dataSet;
		Dictionary<String^, List<String^>^>^ columnNames;
		List<String^>^ tableNames;
	public:
		DbManager(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
		void actionRows(System::String^);
		List<String^>^ GetColumnNames(String^);
		List<String^>^ GetTableNames();
	};
}