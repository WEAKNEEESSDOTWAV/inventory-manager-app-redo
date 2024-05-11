#pragma once
#include "pch.h"
#include "CLEmployee.h"
#include "dbConnect.h"
namespace NS_Ctrl {

	ref class Ctrl_Employee
	{
	private:
		NS_Models::dbConnect^ OB_connect;
		NS_Models::Employee^ OB_empl ;
		DataSet^ ds;
	public:
		Ctrl_Employee();
		DataSet^ listEmployee(String^);
		DataSet^ selectConnection(String^ dataTableName, String^ email, String^ password);
		void ADD(String^, String^, int, String^, String^, String^, String^);
		void UPDATE(int, String^, String^, int, String^, String^, String^, String^);
		void DELETE(int);
	};

}