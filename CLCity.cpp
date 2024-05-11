#include "CLCity.h"


NS_Models::CLCity::CLCity() {
	this->id_city = 0;
	this->name_city = "default";
	this->postal_code = 0;
}

void NS_Models::CLCity::setId_city(int cId) {
	this->id_city = cId;
}
void NS_Models::CLCity::setName_city(String^ cName) {
	this->name_city = cName;
}
void NS_Models::CLCity::setPostal_code(int cPc) {
	this->postal_code = cPc;
}
int NS_Models::CLCity::getId_city(void) {
	return this->id_city;
}
int NS_Models::CLCity::getPostal_code(void) {
	return this->postal_code;
}
String^ NS_Models::CLCity::getName_city(void) {
	return this->name_city;

}