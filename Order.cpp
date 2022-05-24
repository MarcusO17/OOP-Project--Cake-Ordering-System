#include "Order.h"
#include "Customer.h"

//Constructor
Order::Order() {
	OrderID = "";
	UnitPrice = 0.0;
	Qty = 0;
	Cust = Customer("", "", "", "");
	cake = Cake(0, "", 0.0);
}

//Overloaded Constuctor
Order::Order(std::string o, double u, int q, Customer Cust, Cake cake) {
	OrderID = o;
	UnitPrice = u;
	Qty = q;
	this->Cust = Cust;
	this->cake = cake;

}

//Getter

std::string Order::getOrderID() {
	return OrderID;
}

double Order::getUnitPrice() {
	return UnitPrice;
}

int Order::getQty() {
	return Qty;
}

//Setters
void Order::setOrderID(std::string o) {
	OrderID = o;
}

void Order::setUnitPrice(double u) {
	UnitPrice = u;
}

void Order::setQty(int q) {
	Qty = q;
}

std::string Order::toString() {
	return "OrderID: ";
}






