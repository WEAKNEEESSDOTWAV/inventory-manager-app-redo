#include "CLColors.h"
void NS_Models::CLColors::setId_colors(int colors_Id) {
	this->id_colors = colors_Id;
}
void NS_Models::CLColors::setColors(String^ colors_) {
	this->colors = colors_;
}
void NS_Models::CLColors::setQuantity(int _quantity) {
	this->quantity = _quantity;
}
void NS_Models::CLColors::setID_items(int _ID_Items) {
	this->setId_items(_ID_Items);
}

int NS_Models::CLColors::getQuantity(void) {
	return this->quantity;
}
int NS_Models::CLColors::getId_colors(void) {
	return this->id_colors;
}
String^ NS_Models::CLColors::getColors(void) {
	return this->colors;
}
int NS_Models::CLColors::getID_items(void) {
	return getId_items();
}