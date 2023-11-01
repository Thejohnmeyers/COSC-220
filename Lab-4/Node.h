#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;
class Node{
	public:
		char lastName[20];
		char firstName[20];
		int idNumber;
		Node * next;
		Node();
		void printNode();





};
#endif
