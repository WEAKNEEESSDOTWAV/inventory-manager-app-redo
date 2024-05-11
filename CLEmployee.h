#pragma once
#include "pch.h"
#include "CLPeople.h"
namespace NS_Models {

	ref class Employee:public CLPeople

	{
	private:
		int upper_hierarchy_id;
		String^ hiring_date;
		String^ rank;
		String^ password;
		String^ email;
	public:
		void setEmployeeUpperHierarchy(int);
		void setEmployeeHiringDate(String^);
		void setEmployeeRank(String^);
		void setEmployeePassword(String^);
		void setEmployeeEmail(String^);
		void setEmplyeeID(int);
		int getEmployee(void);
		int getUpper_hierarchy_id(void);
		String^ getHiring_date(void);
		String^ getRank(void);
		String^ getPassword(void);
		String^ getEmail(void);
		String^ selectCon(String^ email, String^ password);

		virtual String^ SELECT(void) override;
		virtual String^ INSERT(void) override;
		virtual String^ UPDATE(void) override;
		virtual String^ DELETE(void) override;


	};
}