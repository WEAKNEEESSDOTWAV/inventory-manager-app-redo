#include "CLMilestone_payments.h"
void NS_Models::CLMilestone_payments::setPayment_date(String^ p_date) {
	this->payment_date = p_date;
}
void NS_Models::CLMilestone_payments::setPrice(float p_price) {
	this->price = p_price;
}
void NS_Models::CLMilestone_payments::setid_Mean_of_payment(int p_id_mean) {
	this->Obj_mean_of_pay.setId_mean_of_payment(p_id_mean);
}
void NS_Models::CLMilestone_payments::setID_order(int p_id_order) {
	this->setId_order(p_id_order);
}

int NS_Models::CLMilestone_payments::getID_order(void) {
	return getId_order();
}
String^ NS_Models::CLMilestone_payments::getpayment_date(void) {

	return this-> payment_date;

}
float NS_Models::CLMilestone_payments::getprice(void) {
	return  this->price;
}
int NS_Models::CLMilestone_payments::getId_mean_of_payment(void) {
	return Obj_mean_of_pay.getId_mean_of_payement();
}