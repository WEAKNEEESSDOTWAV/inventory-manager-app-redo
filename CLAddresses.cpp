#include "CLAddresses.h"
#include "pch.h"

namespace NS_Models
{
	CLAddresses::CLAddresses() {
		this->id_address = 0;
		this->additional_address_data = "default";
		this->type = 0;
		this->street_number = "default";
	}
	void CLAddresses::setStreet_name(String^ _sName) {
		this->street_name = _sName;
	}
	void CLAddresses::setStreet_data(String^ _sdata) {
		this->additional_address_data = _sdata;
	}
	void CLAddresses::setStreet_number(String^ _sNumber) {
		this->street_number = _sNumber;
	}
	void CLAddresses::setId_addresses(int _sID) {
		this->id_address = _sID;
	}
	void CLAddresses::setId_person(int _pID) {
		this->id = _pID;
	}
	void CLAddresses::setId_city(int _cID) {
		this->objet_city.setId_city(_cID);
	}
	String^ CLAddresses::getStreet_name(void) {
		return this->street_name;
	}
	String^ CLAddresses::getStreet_number(void) {
		return this->street_number;
	}
	String^ CLAddresses::getStreet_data(void) {
		return this->additional_address_data;
	}
	int CLAddresses::getId_addresses(void) {
		return this->id_address;
	}
	int CLAddresses::getId_person(void) {
		return getId();
	}
	int CLAddresses::getId_city(void) {
		return objet_city.getId_city();
	}


	String^ CLAddresses::getCityName(void) {
		return objet_city.getName_city();
	}

	int CLAddresses::getPostalCode(void) {
		return objet_city.getPostal_code();
	}

	void CLAddresses::setPostalCode(int postal_code) {
		objet_city.setPostal_code(postal_code);
	}

	void CLAddresses::setAddressType(int address_type) {
		this->type = address_type;
	}

	void CLAddresses::setCityName(String^ city_name) {
		objet_city.setName_city(city_name);
	}

	int CLAddresses::getAddressType() {
		return this->type;
	}

	String^ CLAddresses::INSERT(void) {
		return "EXECUTE InsertAddress @street_name = " + getStreet_name() + ", @street_number = " + getStreet_number() + ", @additional_address_data = " + getStreet_data() + ", @type = " + getAddressType() + ", @person_id = " + getId_person() + ", @city_name = " + getCityName() + ", @postal_code = " + getPostalCode();
	}

	String^ CLAddresses::SELECT(void) {
		return "feur";
	}

	String^ CLAddresses::UPDATE(void) {
		return "feur";
	}

	String^ CLAddresses::DELETE(void) {
		return "feur";
	}
	

}