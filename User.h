#pragma once
#include "pch.h"
//#include "CLmaps.h"

namespace InventoryManagerApp {
	namespace Models {

		ref class User //:CLmaps
		{

		protected :
			int id;
			String^ firstName;
			String^ lastName;

		public:
			User();

			property int Id
			{
				int get() { return this->id; }
				void set(int id) { this->id = id; }
			}

			property String^ FirstName
			{
				String^ get() { return this->firstName; }
				void set(String^ firstName) { this->firstName = firstName; }
			}

			property String^ LastName
			{
				String^ get() { return this->lastName; }
				void set(String^ lastName) { this->lastName = lastName; }
			}

			/*void SetId(int);
			void SetFirstName(String^);
			void SetLastName(String^);
			int GetId() { return id; };
			String^ GetFirstName(void);
			String^ GetLastName(void);*/
		};

	}
}

