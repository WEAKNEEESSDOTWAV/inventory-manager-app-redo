#pragma once
#include "pch.h"

namespace NS_Models {
	ref class dbConnect
	{
	private:
		System::String^ queryString;
		System::String^ connectionString;
		System::Data::SqlClient::SqlConnection^ connection;
		System::Data::SqlClient::SqlCommand^ command;
		System::Data::SqlClient::SqlDataAdapter^ adapter;
		System::Data::DataSet^ dataSet;
	public:
		dbConnect(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
	};
}