#pragma once
#include"pch.h"
#include "CLOrders.h"
#include "CLItems.h"
#include "CLColors.h"
namespace NS_Models {

	 ref class CLOrders_line :public CLOrders

	{
	private:
		int quantity_ordered;
		CLOrders_line^ next;
		CLItems^ obj_items;
		CLColors^ obj_color;
	public:
		void setQuantity_ordered(int);
		void setColor_id(int);
		void setID_ITEMS(int);
		void setID_ORDER(int);
		int getQuantity_ordered(void);
		int getColor_id(void);
		int getID_ITEMS(void);
		int getID_ORDER(void);
	};
}

