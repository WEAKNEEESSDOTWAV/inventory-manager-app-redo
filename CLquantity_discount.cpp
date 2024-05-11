#include "CLquantity_discount.h"
int NS_Models::CLquantity_discount::getQuantity_treshold(void) {
	return this->quantity_treshold;
}
float NS_Models::CLquantity_discount::getDiscount_multiplier(void) {
	return this->discount_multiplier;
}
int NS_Models::CLquantity_discount::getID_Items(void) {
	return getId_items();
}
void NS_Models::CLquantity_discount::setQuantity_treshold(int q_tresh) {
	 this->quantity_treshold = q_tresh;
}
void NS_Models::CLquantity_discount::setDiscount_multiplier(float dis_mul) {
	this->discount_multiplier = dis_mul;
}
void NS_Models::CLquantity_discount::setID_items(int _id_Items) {
	this->setId_items(_id_Items);
}