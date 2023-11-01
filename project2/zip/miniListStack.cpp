#include <iostream>
#include "miniListStack.h"
using namespace std;


template <class DataType>
miniListStack<DataType>::miniListStack(){
	
}	// Constructor for ListStack 
template <class DataType>
miniListStack<DataType>::miniListStack(const miniListStack & l){
      *this = l;
}
// Copy contstructor 
template <class DataType>
miniListStack<DataType>::~miniListStack(){
}
// Destructor 
template <class DataType>
int  miniListStack<DataType>::size()  const{
       return sList.size();
}	// get the number of elements in the stack 
template <class DataType>
bool miniListStack<DataType>::isEmpty() const{
       if(sList.front() == -1){
	       return true;
       }
       else
	       return false;
}	// Check if the stack is empty 
template <class DataType>
const DataType& miniListStack<DataType>::top() const{
	if(isEmpty() == false){
	return sList.front();
	}
	return sList.front();
	//return returnInt;
}	//get the top emement without popping it 
template <class DataType>
void miniListStack<DataType>::push(const DataType& e){
       sList.addFront(e);
       return;
}	// Pushes  an  object  onto  the  stack 
template <class DataType>
void miniListStack<DataType>::pop(){
      sList.removeFront();
}	// Pop an object off the stack  
template <class DataType>
void  miniListStack<DataType>::printStack()  const{
	sList.display();
	return;
}
template <class DataType>
miniListStack<DataType>& miniListStack<DataType>::operator=(const  miniListStack<DataType>& l){
	int count = 0;
	miniListStack<DataType>& temp;
        if(this == &l){
                return *this;
        }else{
                
                while(this.top()){
			this.pop();
                }
                
                while(l.top()){
			temp.push(l.top());
			l.pop();
			count++;
                }
		while(temp.top()){
			this.push(temp.top());
			temp.pop();
		}
                /*curr = l.header;
                DNode* temp = l.header;
                this->header = nullptr;
                this->trailer = nullptr;

                for(curr = l.header; curr; curr = curr->next){
                        for(int i = 0; i < count - 1; i++){
                                temp = temp->next;
                        }
                        this->addFront(temp->data);
                        temp = l.header;
                        count--;
                }*/
                return *this;
        }
	
}
