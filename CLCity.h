#pragma once
#include "pch.h"

namespace NS_Models {
	ref class CLCity
	{
	private :

		int id_city;
		String^ name_city;
		int postal_code;
	public:
		CLCity();
		void setId_city(int);
		void setName_city(String^);
		void setPostal_code(int);
		int getPostal_code(void);
		String^ getName_city(void);
		int getId_city(void);

	};

} 

