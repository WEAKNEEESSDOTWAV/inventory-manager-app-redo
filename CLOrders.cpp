#include "CLOrders.h"

namespace NS_Models{

	void CLOrders::setId_order(int _order) {
		this->id_order = _order;
	}
	void CLOrders::setId_customer(int cus_ID) {
		this->setId(cus_ID);
	}
	void CLOrders::reference(String ^ _ref) {
		this->orders_reference = _ref;
	}
	void CLOrders::setDelivery_date(System::DateTime del_date) {
		this->delivery_date = del_date;
	}
	void CLOrders::setTotal_price(float T_price) {
		this->total_price = T_price;
	}
	void CLOrders::setTotal_price_df(float T_price_df) {
		this->total_price_df = T_price_df;
	}
	void CLOrders::setIssuing_date(System::DateTime issuing_date_) {
		this->issuing_date = issuing_date_;
	}

	int CLOrders::getId_order(void) {
		return this->id_order;
	}
	int CLOrders::getId_customer(void) {
		return getId();
	}

	System::DateTime CLOrders::getIssuing_date(void) {
		return this->issuing_date;
	}
	String ^ CLOrders::getOrders_Reference(void) {
		return this->orders_reference;
	}
	System::DateTime CLOrders::getDelivery_date(void) {
		return this->delivery_date;
	}

	void CLOrders::setOrderReference(String ^ order_reference) {
		this->orders_reference = order_reference;
	}

	void CLOrders::setCustomerId(int _customer_id) {
		this->customer_id = _customer_id;
	}

	float CLOrders::getTotal_price(void) {
		return this->total_price;
	}
	float CLOrders::getTotal_price_df(void) {
		return this->total_price_df;
	}

	String ^ CLOrders::INSERT(void) {
		return "EXECUTE InsertOrder @issuing_date = " + getIssuing_date() + ", @reference = " + getOrders_Reference() + ", @delivery_date date = " + getDelivery_date() + ", @total_price_DF float = " + getTotal_price_df() + ", @customer_id = " + getId_customer();
	}

	String ^ CLOrders::SELECT(void) {
		return "EXECUTE SelectOrder @order_reference = " + getOrders_Reference();
	}

	String ^ CLOrders::UPDATE(void) {
		return "EXECUTE UpdateOrder @issuing_date = " + getIssuing_date() + ", @reference = " + getOrders_Reference() + ", @delivery_date date = " + getDelivery_date() + ", @total_price_DF float = " + getTotal_price_df();
	}

	String ^ CLOrders::DELETE(void) {
		return "EXECUTE DeleteOrder @reference = " + getOrders_Reference();
	}

}