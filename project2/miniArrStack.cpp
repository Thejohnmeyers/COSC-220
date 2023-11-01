//Nick Krisulevicz
//Teammate: John Meyers
//COSC 220 - Project 2
//11/12/2021
//miniArrStack.cpp

#include "miniArrStack.h"
#include <iostream>
using namespace std;

template<class DataType>
miniArrStack<DataType>::miniArrStack(int cap){
	capacity = cap;
	arr = new DataType[capacity];
	top = capacity - 1;
}

template<class DataType>
miniArrStack<DataType>::miniArrStack(){
	arr = new DataType[100];
	capacity = 100;
	top = 0;
}

template<class DataType>
miniArrStack<DataType>::miniArrStack(const miniArrStack & e){
	arr = new DataType[e.capacity];
	capacity = e.capacity;
	top = -1;
	for(int i = 0; i < e.top; i++){
		push(e.arr[i]);
	}
}

template<class DataType>
miniArrStack<DataType>::~miniArrStack(){
	delete [] arr;
}

template <class DataType>
int miniArrStack<DataType>::size() const{
	int index = 0;
	index = top + 1;
	return index;
}

template <class DataType>
bool miniArrStack<DataType>::isEmpty() const{
	bool status;
	if (top == -1)
		status = true;
	else
		status = false;
	return status;
}

template <class DataType>
const DataType& miniArrStack<DataType>::printTop(){
	if(isEmpty() == true){
		cout << "Stack is empty" << endl;
		return arr[top];
	}
	else{
		cout << arr[top];
		return arr[top];
	}
}

template <class DataType>
void miniArrStack<DataType>::push(const DataType& e){
	if(top == capacity){
		cout << "Stack is full" << endl;
	}
	else{
		top++;
		arr[top] = e;
	}
	/*
  	if(top == capacity - 1){
    		capacity++;
    		arr = copyArr(arr, capacity, top);
    		top++;
    		arr[top] = e;
	}
  	else{
    		top++;
    		arr[top] = e;
  }
  */
}

template <class DataType>
void miniArrStack<DataType>::pop(){
	if(isEmpty()){
		cout << "Stack is empty, nothing to pop" << endl;
	}
	else{
		top--;
	}
}

template <class DataType>
void miniArrStack<DataType>::printStack() const{
	int index = top;
	if(isEmpty() == true){
		cout << "Stack is empty, nothing to print" << endl;
	}
	else{	
		while(index != 0){
			cout << arr[index] << endl;
			index --;
		}
	}
}

template <class DataType>
miniArrStack<DataType>& miniArrStack<DataType>::operator= (const miniArrStack<DataType>& rhs){
	delete[] this->arr;
	capacity = rhs.capacity;
	top = rhs.top;
	this->arr = new DataType[capacity];
	for(int i = 0; i < capacity; i++){
		this->arr[i] = rhs.arr[i];
	}
	return *this;
}

template<class DataType>
void miniArrStack<DataType>::enlarge(){
	capacity *= 2;
	DataType* chestpain = new DataType[capacity];
	for (int i = 0; i < capacity; i++){
		chestpain[i] = arr[i];
	}
	delete [] arr;
	arr = chestpain;
}
