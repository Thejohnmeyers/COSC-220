#include "Linkedlist.h"
using namespace std;
Linkedlist::Linkedlist(){
	list = nullptr;//sets the list to nullptr
}
Linkedlist::~Linkedlist(){
	Node * curr = nullptr;//defines curser
	curr = list;
	if(list != nullptr){

	while(curr->next != nullptr){
		curr = curr->next;
		delete list;
		list = curr;// makes sure teh list is deleted and then also continues
	}
	}
}
Node * Linkedlist::createNode(){
	Node *newNode = new Node();
	newNode->next = nullptr;// arrow is a dereferencing operator and is the same as (*newNode).next 
	return newNode;// returns the created node 
}
Node * Linkedlist::searchLocation(int ID){
	Node *curr = nullptr;
	curr = list;
	if(list == nullptr){
		return nullptr;
		
	}
	if(ID == list->idNumber){
	

		return list;
	}
	else{
		
		if(curr->idNumber < ID && curr->next->idNumber > ID){
			return curr;
		}
		while(curr->idNumber < ID && curr->next != nullptr){
			
			curr = curr->next;
			
			if(curr->next == nullptr){
				break;}
			if(curr->idNumber < ID && curr->next->idNumber > ID){
				break;
			}

		}
		
		if(curr->next == nullptr){
			return curr;
		}
		if(curr->idNumber < ID && curr->next->idNumber > ID){
			
			return curr;
		}
		else{
			cout << "this student is not in the list" << endl;
			curr = nullptr;
			return curr;
		}
	}
}

	/*while(curr != nullptr){//put the person is already in the liost code in seperate functions
	
	if(ID == list->idNumber){// checks if person is in list
		return list;
	}
	
		
	else if(curr->next->idNumber < ID){
		 curr = curr->next;//returns the function before the one searched
	}
	else if(curr->next->idNumber > ID){
		curr = curr->next;// goes through the list
		
	}
	else if(curr->next->idNumber == ID && curr->next->next == nullptr){
		return curr;// checks if it is at the end of the list
	}
	else if(curr->next->idNumber == ID){
                return curr;
        }

	else
		return nullptr;// returns null
	if(curr == nullptr)
		break;
	}
	return nullptr;	

}*/
void Linkedlist::insertNode(){
	Node * newNode = createNode();
	Node * curr = nullptr;
	if(list == nullptr){
	list = newNode;
	return;// puts it at the front if list is empty
	}
	else{
		curr = list;
		if(newNode->idNumber < curr->idNumber){
			Node * tmp = curr;
			list = newNode;
			newNode->next = tmp;
			return;
		}
		else if(curr->next == nullptr){
			curr->next = newNode;
			return;
		}
		

		curr = searchLocation(newNode->idNumber);
		
		if(curr->next == nullptr){
			curr->next = newNode;
			return;
		}
		if(curr->next != nullptr){
			Node * tmp = curr->next;
			curr->next = newNode;
			newNode->next = tmp;
			return;
		}
	}
}
	/*	cout << "rrrrrr" << endl;
	if(curr->next == nullptr && curr->idNumber > newNode->idNumber){
		cout << "sososososo" << endl;
		Node * tmp = list;
		list = newNode;
		newNode->next = tmp;
		tmp->next = nullptr;
		cout << "eee" << endl;
		return;
	}
	 if(curr->next->idNumber > newNode->idNumber){
		cout << "msmsmsmsm" << endl;
		Node * tmp = list;
		list->next = newNode;
		newNode->next = tmp->next;
		cout << "second" << endl;
		return;
		
	}else{
	while(curr->next != nullptr){
		cout << "third" << endl;
		if(newNode->idNumber < list->idNumber){
			Node * tmp =list;
			list = newNode;
			list->next = tmp;
			cout << "ttttt" << endl;
			break;
		}
		if(curr->idNumber > newNode->idNumber){
			Node* tmp = curr->next;//equals next in line
			curr->next = newNode;
			newNode->next = tmp;
			cout << "wwwww" << endl;
			break;
		}
		else if(curr->idNumber < newNode->idNumber){

			curr = curr->next;
			cout << "dub" << endl;
			
		}	

	}
		
	}
	}
	//curr->next = newNode;*/
	/*
	//newNode = searchLocation(newNode->idNumber);//call to searchlocation
	if(list->idNumber > newNode->idNumber){
		newNode->next = list;
		list = newNode;// puts at the front if there is a list
		cout << "LLLLLLL" << endl;
	}
		curr = list;
	while(curr->next != nullptr && curr->idNumber < newNode->idNumber){
		curr = curr->next;
		cout << "TTTTTTTT" << endl;//syntaxes to the next node in the linked list
	}
	if(curr->next == nullptr){
		curr->next = newNode;
		cout << "SSSSSSSSS" << endl;//sets the next value to newNode
	}
	else{
	newNode->next = curr->next;
	curr->next = newNode;//puts it inbetween
	cout << "WWWWWWWWW" << endl;
	}*/
	//insert(node, int);


void Linkedlist::printList(){
	Node * point = nullptr;
	if(list == nullptr){
		cout << "no data found in the list" << endl;
	}//checks if there is no data in the list
	else{
		point = list;
		int count = 1;
		cout <<"Linked list: " << endl;
		while(point != nullptr){
			cout <<"Node " << count << ": " <<  point->idNumber << " first name: " ;
			//prints out the ID
			for(int i = 0; i < 20; i++){// prints out the first name
				cout << point->firstName[i];
			}
			cout << "last name: ";
			for(int i = 0; i <20; i++){//prints out the last name
				cout << point->lastName[i];
			}
			cout << " " << endl;
			if(point->next != nullptr){
			if(point->idNumber == point->next->idNumber){
                                break;
                        }
			}
			point = point->next;//goes to the next node
			if(point == nullptr){
				break;
			}

			count++;
		}
	}
}
void Linkedlist::searchNode(){
	int ID = 0;
	cout << "please enter the students ID number you are looking for: " << endl;
	cin >> ID;
	Node * student = nullptr;
	student = searchLocation(ID);
	if(student->next == nullptr){
		cout << "data is not available in the list." << endl;
	}// lets us know if there is data in the list or not matching our id number
	else if(student->next != nullptr){
		student->next->printNode();//prints out the node that we are looking for
	}
}
void Linkedlist::deleteNode(int ID){
Node * del = nullptr;
	Node * curr = nullptr;
	//del = searchLocation(ID);
	if(list == nullptr){
		cout << "data is not available in the list." << endl;
		return;
	}
	curr = list;
	if(list != nullptr){
		
	 
	if( curr->idNumber == ID){
		
		curr = list->next;
		delete list;
		list = curr;//handles the case if the node inputted is equal to the first 
	}
	else{
	while(curr != nullptr && curr->idNumber != ID){
		del = curr;
		curr = curr->next;
	}
	if(curr){
		del->next = curr->next;
		delete curr;
	}
	/*
	if(del == list){
		curr = del->next;
		delete del;
		list = curr;
	}
	else if(del->next == nullptr){
                delete del;
                curr->next = nullptr;
        }

	else if(del->next != nullptr){
		curr->next = del->next;
		delete del;
	}
	else{
		cout << "this student is not in the list" << endl;
	}*/
	}
}
}
	/*
	while(curr->next->idNumber != ID){
		if(curr->next != nullptr){
			curr = curr->next;
		}
		if(curr->next == nullptr){
			break;
		}
	}
	if(curr == nullptr){
		cout << "this student is not in the list." << endl;
		return;
	}
	if(del->next == nullptr){
		delete del;
		curr->next = nullptr;
	}
	else if(del->next != nullptr){
		
		curr->next = del->next;
		//goes to the next next node then deletes the node we are looking for
		delete del;
		
	}
	else{
		return;
	}
	}*/
	
	

