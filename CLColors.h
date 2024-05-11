#pragma once
#include "pch.h"
#include "CLItems.h"
namespace NS_Models {

	ref class CLColors:public CLItems

	{
	protected:
		int id_colors;
		String^ colors;
		int quantity;
	public:
		void setID_items(int);
		void setId_colors(int);
		void setQuantity(int);
		void setColors(String^);
		int getId_colors(void);
		int getQuantity(void);
		String^ getColors(void);
		int getID_items(void);
	};
}

