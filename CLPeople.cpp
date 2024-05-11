#include "CLPeople.h"
NS_Models::CLPeople::CLPeople() {
	this->id = 0;
	this->first_name = "Default";
	this->last_name = "Default";
}
void NS_Models::CLPeople::setId(int i) {
	this->id = i;
}

void NS_Models::CLPeople::setFirst_name(String^ prenom) {
	this->first_name = prenom;
}

void NS_Models::CLPeople::setLast_name(String^ nom) {
	this->last_name = nom;
}
int NS_Models::CLPeople::getId(void) {
	return this->id;
}

String^ NS_Models::CLPeople::getFirst_name(void) {
	return this->first_name;
}

String^ NS_Models::CLPeople::getLast_name(void) {
	return this->last_name;
}


//String^ NS_Models::CLPeople::INSERT(void) {
//	return "feur";
//}
//
//String^ NS_Models::CLPeople::SELECT(void) {
//	return "feur";
//}
//
//String^ NS_Models::CLPeople::UPDATE(void) {
//	return "feur";
//}
//
//String^ NS_Models::CLPeople::DELETE(void) {
//	return "feur";
//}

