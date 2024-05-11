#pragma once
#include "pch.h"
namespace NS_Models {
	ref class CLMean_of_payment
	{
	protected:
		int id_mean_of_payment;
		String^ mean_of_payment;
	public:
		int getId_mean_of_payement(void);
		String^ getMean_of_payment(void);
		void setId_mean_of_payment(int);
		void setMean_of_payment(String^);

		//virtual String^ SELECT(void);
		//virtual String^ INSERT(void);
		//virtual String^ UPDATE(void);
		//virtual String^ DELETE(void);

	};

}