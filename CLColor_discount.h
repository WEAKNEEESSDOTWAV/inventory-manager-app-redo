#pragma once
#include "pch.h"
#include "CLColors.h"
namespace NS_Models {

	ref class CLColor_discount:public CLColors

	{
	private:
		int id_discount;
		int discount_multiplier;
	public:
		void setId_discount(int);
		void setDiscount_multiplier(int);
		void setID_colors(int);
		int getID_discount(void);
		int getDiscount_multiplier(void);
		int getID__colors(void);
	};

}