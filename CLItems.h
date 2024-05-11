#pragma once
#include "pch.h"
#include "CLmaps.h"

namespace NS_Models {
	ref class CLItems :CLmaps
	{
	private:
		int id_items;
		String^ items_reference;
		String^ type;
		String^ name;
		float price_df;
		int quantity;
		String^ color;

	public:
		CLItems();
		void setId_items(int);

		void setItems_reference(String^);
		void setName(String^);
		void setType(String^);
		void setItems_quantity(int);
		void setPrice_df(float);
		void setColors(String^);
		int getId_items(void);
		int getItems_quantity(void);
		String^ getItems_reference(void);
		String^ getColors(void);
		String^ getName(void);
		String^ getType(void);
		float getPrice_df(void);

		String^ SELECT(void)override;
		String^ INSERT(void)override;
		String^ UPDATE(void)override;
		String^ DELETE(void)override;

	};
}