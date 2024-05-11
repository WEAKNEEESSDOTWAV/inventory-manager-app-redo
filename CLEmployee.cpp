#include "CLEmployee.h"

int NS_Models::Employee::getUpper_hierarchy_id(void) {
	return this->upper_hierarchy_id;
}
String^ NS_Models::Employee::getPassword(void) {
	return this->password;
}
String^ NS_Models::Employee::getRank(void) {
	return this->rank;
}
String^ NS_Models::Employee::getHiring_date(void) {
	return this->hiring_date;
}
String^ NS_Models::Employee::getEmail(void) {
	return this->email;
}

int NS_Models::Employee::getEmployee(void) {
	return getId();
}

void NS_Models::Employee::setEmplyeeID(int _eId) {
	this->setId(_eId);
}
void NS_Models::Employee::setEmployeeUpperHierarchy(int _id) {
	this->upper_hierarchy_id = _id;
}

void NS_Models::Employee::setEmployeeHiringDate(String^ date) {
	this->hiring_date = date;
}

void NS_Models::Employee::setEmployeeRank(String^ _rank) {
	this->rank = _rank;
}

void NS_Models::Employee::setEmployeePassword(String^ pwd) {
	this->password = pwd;
}

void NS_Models::Employee::setEmployeeEmail(String^ _email) {
	this->email = _email;
}

String^ NS_Models::Employee::selectCon(String^ email, String^ password)
{
	return "SELECT email FROM EMPLOYEES WHERE email ='"+ email + "' and password = '"+ password+"'";
}

String^ NS_Models::Employee::SELECT()
{
	return "feur";
}
String^ NS_Models::Employee::INSERT()
{
	return "feur";
}
String^ NS_Models::Employee::UPDATE()
{
	return "feur";

}
String^ NS_Models::Employee::DELETE()
{
	return "feur";
}
