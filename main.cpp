#include <iostream>
#include "Order.h"
#include "LinkedList.h"
#include <sstream>
#include <cstdlib>

using namespace std;
/*string generateOrderID(LinkedList orderlist){

	bool repeat = false;
	string temp;
	stringstream string_object_name;
	int random;
	do{
	random = rand() % 10000 + 9999;

	string_object_name << random;
	string_object_name >> temp;

	temp = "A" + temp;
	if (orderlist.isEmpty() == true){
		repeat = false;
	}
	if (orderlist.isEmpty()== false){
		string temp2;
		Node *curr = orderlist.headptr();
	for(int i =1; i<orderlist.size(); i++){

		string_object_name << curr->item;
		string_object_name >> temp2;
	if(temp2 == temp){
		repeat = true;
	}
	curr = curr->next;
	}}}while(repeat == false);

	return temp; */

int main() {
	Order temp1,temp2,temp3;
	LinkedList orderList;
	temp1.setOrderID("10000");
	temp2.setOrderID("90000");
	temp3.setOrderID("30000");

	orderList.insert(1, temp1);
	orderList.insert(2, temp2);
	orderList.insert(3, temp3);
	orderList.insert(4, temp1);
	orderList.insert(5, temp2);
	
	orderList.displayAll();

	








	return 0;
}
