#pragma once
#include "pch.h"
#include "dbConnect.h"
#include "CLCustomer.h"
namespace NS_Ctrl {
	ref class Ctrl_Customers
	{
	private:
		NS_Models::dbConnect^ OB_connect;
		NS_Models::Customer^ OB_customer;
		DataSet^ ds;
	public:
		Ctrl_Customers();
		DataSet^ listCustomer(String^, String^);
		void ADD(String^, String^, DateTime);
		void UPDATE(String^, String^, DateTime, int);
		void DELETE(int);
		DataSet^ getDataSet();
	};
}