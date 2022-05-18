#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node{
			int item;
			Node *next;
};

class LinkedList{
	
	private:
	
		Node *head_ptr;
		Node *tail_ptr;
		int numOfItem;	
		
		
	public:
		LinkedList();
		bool isEmpty();
		int size();
		bool insert(int,int);
		bool remove(int);
		bool displayAll();
};


#endif
