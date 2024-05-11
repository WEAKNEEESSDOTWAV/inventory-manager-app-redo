#pragma once
#include "pch.h"
#include"CLPeople.h"
#include"CLCity.h"

namespace NS_Models {
	ref class CLAddresses : public CLPeople
	{
	private:
		int id_address;
		String^ additional_address_data;
		int type;
		String^ street_number;
		String^ street_name;
		CLCity objet_city;
	public:
		CLAddresses();
		void setStreet_name(String^ _sName);
		void setStreet_data(String^ _sdata);
		void setStreet_number(String^ _sNumber);
		void setId_addresses(int _sID);
		void setId_person(int _pID);
		void setId_city(int _cID);
		void setAddressType(int);
		void setPostalCode(int);
		void setCityName(String^);
		String^ getStreet_name(void);
		String^ getStreet_number(void);
		String^ getStreet_data(void);
		int getAddressType(void);
		int getPostalCode(void);
		String^ getCityName(void);
		int getId_addresses(void);
		int getId_person(void);
		int getId_city(void);
		String^ SELECT(void) override;
		String^ INSERT(void) override;
		String^ UPDATE(void) override;
		String^ DELETE(void) override;

	};

}
