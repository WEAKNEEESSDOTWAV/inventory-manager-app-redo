#pragma once
#include "pch.h"
#include "CLCustomer.h"
namespace NS_Models {
	ref class CLOrders :public Customer
	{
	protected:
		int id_order;
		System::DateTime issuing_date;
		String^ orders_reference;
		System::DateTime delivery_date;
		int customer_id;

		float total_price_df; 
		float total_price;
	public:
		void setId_order(int);
		void setId_customer(int);
		void setIssuing_date(System::DateTime);
		void reference(String^);
		void setDelivery_date(System::DateTime);
		void setTotal_price(float);
		void setTotal_price_df(float);
		void setCustomerId(int);
		int getId_order(void);
		void setOrderReference(String^);
		int getId_customer(void);
		System::DateTime getIssuing_date(void);
		String^ getOrders_Reference(void);
		System::DateTime getDelivery_date(void);
		float getTotal_price(void);
		float getTotal_price_df(void);

		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ UPDATE(void) override;
		virtual String^ DELETE(void) override;
	};
}

