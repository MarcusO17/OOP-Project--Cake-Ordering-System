#ifndef ORDER_H
#define ORDER_H
#include <string>
#include "Customer.h"
#include "Cake.h"

class Order
{
private:
	std::string OrderID;
	double UnitPrice;
	int Qty;



public:
	Customer Cust;
	Cake cake;


	//Constructor
	Order();
	Order(std::string, double, int, Customer, Cake);

	//Getter
	std::string getOrderID();
	double getUnitPrice();
	int getQty();

	//Setter
	void setOrderID(std::string);
	void setUnitPrice(double);
	void setQty(int);

	std::string toString();



};

#endif
	
