#include "CLOrders_line.h"
namespace NS_Models {
	void CLOrders_line::setQuantity_ordered(int _x) {
		this->quantity_ordered = _x;
	}
	void CLOrders_line::setID_ITEMS(int _id_ITEMS) {
		this->obj_items->setId_items(_id_ITEMS);
	}
	void CLOrders_line::setID_ORDER(int _id_ORDER) {
		this->setId_order(_id_ORDER);
	}
	void CLOrders_line::setColor_id(int _id_colors) {
		this->obj_color->setId_colors(_id_colors);
	}
	int CLOrders_line::getQuantity_ordered(void) {
		return this->quantity_ordered;
	}
	int CLOrders_line::getID_ITEMS(void) {
		return obj_items->getId_items();
	}
	int CLOrders_line::getID_ORDER(void) {
		return getId_order();
	}
	int CLOrders_line::getColor_id(void) {
		return obj_color->getId_colors();
	}

}