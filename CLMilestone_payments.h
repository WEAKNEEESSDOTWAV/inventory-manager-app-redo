#pragma once
#include "pch.h"
#include "CLOrders.h"
#include "CLMean_of_payment.h"
namespace NS_Models {

	ref class CLMilestone_payments:  CLOrders
	{
	private:
		String^ payment_date;
		float price; 

		CLMean_of_payment Obj_mean_of_pay;
	public:
		void setPayment_date(String^);
		void setPrice(float);
		void setid_Mean_of_payment(int);
		void setID_order(int);
		String^ getpayment_date(void);
		float getprice(void);
		int getId_mean_of_payment(void);
		int getID_order(void);
	};

}

