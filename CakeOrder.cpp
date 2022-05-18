#include "CakeOrder.h"
#include "Customer.h"

//Constructor
CakeOrder::CakeOrder(){
	OrderID = 0;
	CakeCode = 0;
	Flavour = "";
	Weight = 0.0;
	UnitPrice = 0.0;
	Qty = 0;
	Cust = Customer("","","","");
}

//Overloaded Constuctor
CakeOrder::CakeOrder(int o,int c,std::string f,double w,double u,int q,Customer Cust){
	OrderID = o;
	CakeCode = c;
	Flavour = f;
	Weight = w;
	UnitPrice = u;
	Qty = q;
	this->Cust = Cust;
}

//Getter
int CakeOrder::getOrderID(){
	return OrderID;
}

int CakeOrder::getCakeCode(){
	return CakeCode;
}

std::string CakeOrder::getFlavour(){
	return Flavour;
}

double CakeOrder::getWeight(){
	return Weight;
}

double CakeOrder::getUnitPrice(){
	return UnitPrice;
}

int CakeOrder::getQty(){
	return Qty;
}

//Setters
void CakeOrder::setOrderID(int o){
	OrderID = o;
}

void CakeOrder::setCakeCode(int c){
	CakeCode = c;
}

void CakeOrder::setFlavour(std::string f){
	Flavour = f;
}

void CakeOrder::setWeight(double w){
	Weight = w;
}

void CakeOrder::setUnitPrice(double u){
	UnitPrice = u;
}

void CakeOrder::setQty(int q){
	Qty = q;
}






