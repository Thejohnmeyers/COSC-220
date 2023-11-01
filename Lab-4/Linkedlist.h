#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"
using namespace std;
class Linkedlist{
	private: 
		Node * list;
		Node * createNode();
		Node * searchLocation(int ID);
	public:
	
		Linkedlist();
		~Linkedlist();
		void insertNode();
		void deleteNode(int ID);
		void printList();
		void searchNode();
};
#endif
