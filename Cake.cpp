#include "Cake.h"

Cake::Cake(){
	CakeCode = 0;
	Flavour = "";
	Weight = 0.0;
}

Cake::Cake(int c, std::string f,double w){
	CakeCode = c;
	Flavour = f;
	Weight = w;
}

int Cake::getCakeCode(){
	return CakeCode;
}

std::string Cake::getFlavour(){
	return Flavour;
} 

double Cake::getWeight(){
	return Weight;
}

void Cake::setCakeCode(int c){
	CakeCode = c;
}

void Cake::setFlavour(std::string f){
	Flavour = f;
} 

void Cake::setWeight(double w){
	Weight = w;
}
