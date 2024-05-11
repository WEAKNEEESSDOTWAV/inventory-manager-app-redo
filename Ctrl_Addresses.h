#pragma once
#include "pch.h"
#include "CLAddresses.h"
#include "dbConnect.h"
namespace NS_Ctrl {
	ref class Ctrl_Addresses
	{
	private:
		NS_Models::dbConnect^ OB_connect;
		NS_Models::CLAddresses^ OB_Address;
		DataSet^ ds;
	public:
		Ctrl_Addresses();
		DataSet^ listAddress(String^);
		void ADD(String^, String^, String^, String^, int, int);
		void UPDATE(String^, String^, String^, int, int, String^, int);
		void DELETE(int);
	};

}