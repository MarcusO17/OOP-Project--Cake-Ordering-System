#ifndef CAKEORDER_H
#define CAKEORDER_H
#include <string>
#include "Customer.h"

class CakeOrder
{
	private:
		int OrderID;
		int CakeCode;
		std::string Flavour;
		double Weight;
		double UnitPrice;
		int Qty;
	
		
	public:
		Customer Cust;
		
		//Constructor
		CakeOrder();
		CakeOrder(int,int,std::string,double,double,int,Customer);
		
		//Getter
		int getOrderID();
		int getCakeCode();
		std::string getFlavour();
		double getWeight();
		double getUnitPrice();
		int getQty();
		
		//Setter
		void setOrderID(int);
		void setCakeCode(int);
		void setFlavour(std::string);
		void setWeight(double);
		void setUnitPrice(double);
		void setQty(int);
		
		
		
		
		
};

#endif
