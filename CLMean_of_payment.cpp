#include "CLMean_of_payment.h"
int NS_Models::CLMean_of_payment::getId_mean_of_payement(void) {
	return this->id_mean_of_payment;
}
String^ NS_Models::CLMean_of_payment::getMean_of_payment(void) {
	return this->mean_of_payment;
}

void NS_Models::CLMean_of_payment::setId_mean_of_payment(int _id_mean) {
	this->id_mean_of_payment = _id_mean;
}
void NS_Models::CLMean_of_payment::setMean_of_payment(String^ _mean_pay) {
	this->mean_of_payment = _mean_pay;
}