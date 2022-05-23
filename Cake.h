#ifndef CAKE_H
#define CAKE_H
#include<string>

class Cake
{
	private:
		int CakeCode;
		std::string Flavour;
		double Weight;
		
	public:
		Cake();
		Cake(int,std::string,double);
		
		int getCakeCode();
		std::string getFlavour();
		double getWeight();
		
		void setCakeCode(int);
		void setFlavour(std::string);
		void setWeight(double);
};

#endif
