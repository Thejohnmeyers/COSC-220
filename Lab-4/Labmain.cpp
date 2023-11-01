#include "Linkedlist.h"
#include <iostream>
using namespace std;
int main(){
	char answer;
	Linkedlist list;
	cout <<  "would you like to start the linkedlist program?(Y/N)" << endl;
	cin >> answer;
	if(answer == 'N'){
		cout << "have a good day!" <<endl;
	}
	else if(answer == 'Y'){
		int menuOptions = 0;
		while(menuOptions != 5){
			menuOptions = 0;
			cout << "1. Insert a node " <<endl;
			cout << "2. Delete a node " <<endl;
			cout << "3. Print list " <<endl;
			cout << "4. Search a node - search a node and print information for a student" << endl;
			cout << "5. Quit the program " <<endl;
			cout << "input the number of the program you want to run: ";
			cin >> menuOptions;
			if(menuOptions == 1){
				list.insertNode();
			}
			else if(menuOptions == 2){
				int ID;
				cout << "whats the students ID you are looking to delete:" << endl;
				cin >> ID;
				list.deleteNode(ID);
			}
			else if(menuOptions == 3){
				list.printList();
			}
			else if(menuOptions == 4){
				list.searchNode();
			}
			else if(menuOptions == 5){
				list.~Linkedlist();
			}
			else if(menuOptions == 0){
			}
			else{
				cout << "invalid input please input a correct value" << endl;

			}
		}
	}
	else{
		cout << "invalid input goodbye!" << endl;
	}
}
