#include "Ctrl_Addresses.h"
namespace NS_Ctrl {
	Ctrl_Addresses::Ctrl_Addresses() {
		this->OB_connect = gcnew NS_Models::dbConnect();
		this->ds = gcnew System::Data::DataSet();
		this->OB_Address = gcnew NS_Models::CLAddresses();
	}
	DataSet^ Ctrl_Addresses::listAddress(String^ sDataTableName) {
		return this->ds = OB_connect->getRows(OB_Address->SELECT(), sDataTableName);
	}
	void Ctrl_Addresses::ADD(String^ name, String^ streetData, String^ streetNumber, String^ city_name, int postal_code, int id_person) {
		this->OB_Address->setStreet_name(name);
		this->OB_Address->setStreet_data(streetData);
		this->OB_Address->setStreet_number(streetNumber);
		this->OB_Address->setCityName(city_name);
		this->OB_Address->setPostalCode(postal_code);
		this->OB_Address->setId_person(id_person);
		this->OB_connect->actionRows(this->OB_Address->INSERT());
	}
	void Ctrl_Addresses::UPDATE(String^ StreetName, String^ streetData, String^ streetNumber, int id_person, int address_type, String^ city_name, int postal_code) {
		//this->OB_Address->setId_addresses(id_address);
		this->OB_Address->setStreet_name(StreetName);
		this->OB_Address->setStreet_data(streetData);
		this->OB_Address->setAddressType(address_type);
		this->OB_Address->setStreet_number(streetNumber);
		this->OB_Address->setCityName(city_name);
		this->OB_Address->setPostalCode(postal_code);
		this->OB_Address->setId_person(id_person);
		this->OB_connect->actionRows(this->OB_Address->UPDATE());
	}
	void Ctrl_Addresses::DELETE(int _id) {
		this->OB_Address->setId(_id);
		this->OB_connect->actionRows(this->OB_Address->DELETE());
	}

}