#ifndef ORDER_H
#define ORDER_H
#include <string>
#include "Customer.h"
#include "Cake.h"

class Order
{
	private:
		int OrderID;
		double UnitPrice;
		int Qty;
	
		
		
	public:
		Customer Cust;
		Cake cake;
		
		
		//Constructor
		Order();
		Order(int,double,int,Customer,Cake);
		
		//Getter
		int getOrderID();
		double getUnitPrice();
		int getQty();
		
		//Setter
		void setOrderID(int);
		void setUnitPrice(double);
		void setQty(int);
		
		
		
		
		
};

#endif
