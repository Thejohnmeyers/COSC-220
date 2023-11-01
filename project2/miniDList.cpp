//written by John Meyers
//COSC-220
//this is the linked list functions to make the linked list 
//more so to implement the linked lists into the queue and stack
#include <iostream>
using namespace std;
#include "miniDList.h"
template <class DataType>
miniDList<DataType>::miniDList(const miniDList& l){
	DNode * curr = l.header->next;
	int count = 0;
	while(curr != trailer){
		curr = curr->next;
		count++;
	}
	curr = l.header->next;
	DNode * temp = l.header->next;
	header->next = nullptr;
	trailer->prev = nullptr;
	for(curr = l.header->next; curr != l.trailer; curr = curr->next){
		for(int i = 0; i < count - 1; i++){
			temp = temp->next;
		}
		addFront(temp->data);
		temp = l.header->next;
		count--;
	}
}
template <class DataType>
miniDList<DataType>::~miniDList(){
	DNode * curr = nullptr;
	DNode * temp = nullptr;
	curr = header;
	temp = curr->next;
	while(curr != nullptr){
		delete curr;
		curr = temp;
		temp = curr->next;
	}

}
template <class DataType>
const DataType& miniDList<DataType>::front() const{
	
/*	DataType returnInt = NULL; 
	if(header == nullptr){
		return returnInt;
	}*/
	return header->next->data;
}
template <class DataType>
const DataType& miniDList<DataType>::back() const{
	/*DataType returnInt = NULL; 
	if(trailer == nullptr){
		return returnInt;
	}*/
	
	return trailer->prev->data;
}
template <class DataType>
void miniDList<DataType>::removeFront(){
	remove(header->next);
}
template <class DataType>
void miniDList<DataType>::removeBack(){
	remove(trailer->prev);
}
template <class DataType>
void miniDList<DataType>::addFront(const DataType& e){
	add(header->next, e);
}
template <class DataType>
void miniDList<DataType>::addBack(const DataType& e){
	
	add(trailer, e);
}
template <class DataType>
int miniDList<DataType>::size() const{
	int count = 0;
	DNode * curr = nullptr;
	if(header->next == trailer){
		return 0;
	}
	else if(header->next  == nullptr){
		return 1;
	}
	curr = header->next;
	while(curr != trailer){
		curr = curr->next;
		count++;
	}
	return count;
	
}
template <class DataType>
bool miniDList<DataType>::contains(const DataType& e){
	DNode * curr = header->next;
	if(e == curr->data){
		return true;
	}
	while(curr->next != nullptr){
		curr =  curr->next;
	}
	if(e == curr->data)
		return true;
	else 
		return false;
}
template <class DataType>
void miniDList<DataType>::display() const{
	int count =  1;
	if(header->next != trailer){
	DNode * curr = header->next;
	while(curr != trailer){
		cout << "Node " << count  << ":" << curr->data << endl;
		count++;
		curr = curr->next;
	}
	}
	else{
		cout << "there is nothing to print" << endl;
	}
	
	

}
template <class DataType>
miniDList<DataType>& miniDList<DataType>::operator=(const miniDList<DataType>& l){
	int count = 0;
	if(this == &l){
		DNode* temp = nullptr;
		return *this;
	}else{
		DNode* curr = this->header->next;
		while(curr){
			DNode* nex = curr->next;
			delete curr;
			curr = nex;
		}
		curr = l.header->next;
		while(curr){
			count++;
			curr = curr->next;
		}
		curr = l.header->next;
		DNode* temp = l.header->next;
		this->header->next = nullptr;
		this->trailer->prev = nullptr;

		for(curr = l.header->next; curr != l.trailer; curr = curr->next){
			for(int i = 0; i < count - 1; i++){
				temp = temp->next;
			}
			this->addFront(temp->data);
			temp = l.header->next;
			count--;
		}
		return *this;
	}
	
	
	/*DNode * curr = nullptr;
	curr = header;
	DNode * temp = l.header;
	while(curr != nullptr){
		curr = temp;
		curr = curr->next;
		temp = temp->next;
	}*/


}
template <class DataType>
void miniDList<DataType>::add(DNode * v, const DataType& e){
	DNode * curr = nullptr;
	DNode * newNode = new DNode;
	newNode->data = e;
	newNode->next = nullptr;
	newNode->prev = nullptr;
	if(header->next == trailer){

		header->next = newNode;
		newNode->prev = header;
		newNode->next = trailer;
		trailer->prev = newNode;
		return;
	}
/*	else if(header->next == nullptr){
		curr = header;
		trailer = curr;
		header = newNode;
		newNode->next = curr;
		curr->prev = newNode;
		curr->next = nullptr;
		newNode->prev = nullptr;
		return;
	}*/
	
	if(header->next == v){

		curr = header->next;
		header->next = newNode;
		newNode->next = curr;
		curr->prev = newNode;
		return;
	}
	
	else if(trailer == v){
		curr = trailer->prev;
		trailer->prev = newNode;
		newNode->prev = curr;
		curr->next = newNode;
		newNode->next = trailer;
		//trailer->prev = v;
		//v->next = trailer;
		//v->prev = curr;
		//curr->next = v;
	}
	else{
		return;//this should not happen
	}

}
template <class DataType>
void miniDList<DataType>::remove(DNode* v){
	DNode * curr = nullptr;
	if(header->next == trailer){
		return;
	}
	if(header->next == v && trailer->prev == v){
		if(header->next == v){
		header->next = trailer;
		trailer->prev = header;
		delete v;
		}
		return;
	}
	else if(trailer->prev == v){
		curr = v->prev;
		if(trailer->prev == v){
			trailer->prev = curr;
			curr->next  = trailer;
			delete v;
		}
	}
	else if(header->next == v){
		curr = v->next;
		if(header->next == v){
			header->next = curr;
			curr->prev = header;
			delete v;
		}
	}
	/*else if(v == header){
		curr = header->next;
		delete header;
		header = curr;
		curr->prev = nullptr;
	}
	else if(v == trailer){
		curr = trailer->prev;
		delete trailer;
		trailer = curr;
		trailer->next = nullptr;
	}*/
	else {
		cout << "uh oh" << endl;
		return;
	}/*
	curr = header;
	while(curr->next != v){
		curr = curr->next;
		if(curr == nullptr){
			break;
		}
	}
	if(curr->next == v){
		curr->next = v->next;
		delete v;
	}
	if(curr == nullptr){
		return;
	}
*/


}
/*template <class DataType>
std::ostream& miniDList<DataType>::operator<<(std::ostream& os, const DNode& dnode){
        return os << dnode.data;
}*/

