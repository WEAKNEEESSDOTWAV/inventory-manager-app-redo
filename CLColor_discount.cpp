#include "CLColor_discount.h"
void NS_Models::CLColor_discount::setId_discount(int _discount_id) {
	this->id_discount = _discount_id;
}
void NS_Models::CLColor_discount::setDiscount_multiplier(int discount_mul) {
	this->discount_multiplier = discount_mul;
}
void NS_Models::CLColor_discount::setID_colors(int dis_id_colors) {
	this->setId_discount(dis_id_colors);
}
int NS_Models::CLColor_discount::getID_discount(void) {
	return this->id_discount;
}

int NS_Models::CLColor_discount::getDiscount_multiplier(void) {
	return this->discount_multiplier;
}
int NS_Models::CLColor_discount::getID__colors(void) {
	return getId_colors();

}
