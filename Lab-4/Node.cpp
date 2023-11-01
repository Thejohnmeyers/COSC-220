#include <iostream>
#include <string>
using namespace std;
#include "Node.h"
Node::Node(){
	cout << "what is your ID number: " <<  endl;
   	cin >> idNumber;
	cout << "what is your first name? " <<endl;
	cin.ignore();
	cin.getline(firstName, 20);
	cout << "what is your last name? " << endl;
	cin.getline(lastName, 20);
		
}
void Node::printNode(){
	
	cout << "The ID number is: " << idNumber<< endl;
	for(int i = 0; i < 20; i++){
		cout << firstName[i];
	}
	cout << endl;
	for(int i =0; i<20; i++){
		cout << lastName[i];
	}
	cout << endl;
}

