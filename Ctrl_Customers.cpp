#include "Ctrl_Customers.h"
namespace NS_Ctrl {
	Ctrl_Customers::Ctrl_Customers() {
		this->OB_connect = gcnew NS_Models::dbConnect();
		this->ds = gcnew System::Data::DataSet();
		this->OB_customer = gcnew NS_Models::Customer();
	}

	DataSet^ Ctrl_Customers::listCustomer(String^ first_name, String^ last_name) {
		this->OB_customer->setLast_name(first_name);
		this->OB_customer->setFirst_name(last_name);
		return this->ds = OB_connect->getRows(OB_customer->SELECT(), "sDataTableName");
		//NS_Ctrl::Ctrl_Addresses^ OB_Ctrl_address = gcnew NS_Ctrl::Ctrl_Addresses();
	}


	void Ctrl_Customers::ADD(String^ _nom, String^ _prenom, DateTime _date_birth) {
		this->OB_customer->setLast_name(_nom);
		this->OB_customer->setFirst_name(_prenom);
		this->OB_customer->setCustomer_Birth_Date(_date_birth);
		this->OB_connect->actionRows(this->OB_customer->INSERT());
	}

	void Ctrl_Customers::UPDATE(String^ _nom, String^ _prenom, DateTime _date_birth, int id) {
		if (id != 0) {
			this->OB_customer->setId(id);
		}
	}

	void Ctrl_Customers::DELETE(int id) {
		if (id != 0) {
			this->OB_customer->setId(id);
			this->OB_connect->actionRows(this->OB_customer->DELETE());
		}
	}

	DataSet^ Ctrl_Customers::getDataSet() {
		return this->ds;
	};
}