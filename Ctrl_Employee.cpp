#include "Ctrl_Employee.h"
#include "Ctrl_Customers.h"
namespace NS_Ctrl {

	Ctrl_Employee::Ctrl_Employee() {
		this->OB_connect = gcnew NS_Models::dbConnect();
		this->ds = gcnew System::Data::DataSet();
		this->OB_empl = gcnew NS_Models::Employee();
	}

	DataSet^ Ctrl_Employee::listEmployee(String^ sDataTableName) {
		return this->ds = OB_connect->getRows(OB_empl->SELECT(), sDataTableName);
	}
	DataSet^ Ctrl_Employee::selectConnection(System::String^ dataTableName, System::String^ email, System::String^ password)
	{
		String^ sql;
		sql = this->OB_empl->selectCon(email, password);
		return this->OB_connect->getRows(sql, dataTableName);
	}
	void Ctrl_Employee::ADD(String^ _nom, String^ _prenom, int _upperhierarchy, String^ _hiring_date, String^ _rank, String^ _password, String^ _email) {
		this->OB_empl->setLast_name(_nom);
		this->OB_empl->setFirst_name(_prenom);
		this->OB_empl->setEmployeeUpperHierarchy(_upperhierarchy);
		this->OB_empl->setEmployeeHiringDate(_hiring_date);
		this->OB_empl->setEmployeeRank(_rank);
		this->OB_empl->setEmployeePassword(_password);
		this->OB_empl->setEmployeeEmail(_email);
		this->OB_connect->actionRows(this->OB_empl->INSERT());

	}

	void Ctrl_Employee::UPDATE(int _id, String^ _nom, String^ _prenom, int _upperhierarchy, String^ _hiring_date, String^ _rank, String^ _password, String^ _email) {
		this->OB_empl->setId(_id);
		this->OB_empl->setLast_name(_nom);
		this->OB_empl->setFirst_name(_prenom);
		this->OB_empl->setEmployeeUpperHierarchy(_upperhierarchy);
		this->OB_empl->setEmployeeHiringDate(_hiring_date);
		this->OB_empl->setEmployeeRank(_rank);
		this->OB_empl->setEmployeePassword(_password);
		this->OB_empl->setEmployeeEmail(_email);
		this->OB_connect->actionRows(this->OB_empl->UPDATE());
	}

	void Ctrl_Employee::DELETE(int _id) {
		this->OB_empl->setId(_id);
		this->OB_connect->actionRows(this->OB_empl->DELETE());
	}

}