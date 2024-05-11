#pragma once
#include "pch.h"
#include "CLItems.h"
namespace NS_Models {
	ref class CLquantity_discount: public CLItems
	{
	private:
		int quantity_treshold;
		float discount_multiplier;
	public:
		int getQuantity_treshold(void);
		float getDiscount_multiplier(void);
		int getID_Items(void);
		void setQuantity_treshold(int);
		void setDiscount_multiplier(float);
		void setID_items(int);
	};
}
