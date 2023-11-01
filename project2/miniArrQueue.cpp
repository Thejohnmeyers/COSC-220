//Nick Krisulevicz
//Teammate: John Meyers
//COSC 220 - Project 2
//11/12/2021
//miniArrQueue.cpp

#include "miniArrQueue.h"
#include <iostream>

using namespace std;

template<class DataType>
miniArrQueue<DataType>::miniArrQueue(){
	capacity = 100;
	arr = new DataType[capacity];
	front = 0;
	rear = 1;
}

template<class DataType>
miniArrQueue<DataType>::miniArrQueue(const miniArrQueue & e){
	arr = new DataType[e.capacity];
	capacity = e.capacity;
	front = e.front;
	rear = e.rear;
	for (int i = 0; i < e.rear; i++){
		enqueue(e.arr[i]);
	}
}

template<class DataType>
miniArrQueue<DataType>::~miniArrQueue(){
	delete [] arr;
}

template <class DataType>
int miniArrQueue<DataType>::size() const{
	return rear + 1;
}

template <class DataType>
bool miniArrQueue<DataType>::isEmpty() const{
	bool status;
	if(front == -1){
		status = true;
	}
	else{
		status = false;
	}
	return status;
}

template <class DataType>
void miniArrQueue<DataType>::enqueue(const DataType& e){
	/*
	if(rear == capacity){
		cout << "Queue is full" << endl;
	}
	else{
		rear = (rear + 1) % capacity;
		arr[rear] = e;
		rear++;
	}
	
	if (rear == (capacity - 1)){
		cout << "Queue is full, cannot enqueue this element" << endl;
	}
	if(front == -1){
		front++;
	}
	arr[rear++] = e;*/
	if(rear > capacity){
		std::cout << "Full" << std::endl;
		return;
	}else{
		arr[rear] = e;
		rear++;
	}
	return;
}

template <class DataType>
void miniArrQueue<DataType>::dequeue(){
	if (isEmpty() == true){
		cout << "Queue is empty, nothing to dequeue" << endl;
	}
	else{
		front = (front + 1) % capacity;
		front++;
	}
}

template <class DataType>
const DataType& miniArrQueue<DataType>::printFront(){
	if (isEmpty() == true){
		cout << "Queue is Empty" << endl;
		return arr[front++];
	}
	else{
		cout << arr[front];
		return arr[front++];
	}
}

template <class DataType>
void miniArrQueue<DataType>::printQueue(){
	/*
	int index = front;
	if (isEmpty()){
		cout << "Queue is empty, nothing to print" << endl;
	}
	else{
		while(index != rear){
			cout << arr[index] << endl;
			index ++;
		
			if(index >= rear){
				break;
			}
		}
	}
	
	if (front == -1){
		cout << "Queue is empty, nothing to print" << endl;
	}
	else{
		for(int i = front; i <= rear; i++){
			cout << arr[i] << " ";
		}
	}
	cout << endl;*/
	if(front == rear){
		std::cout << "Queue is Empty" << std::endl;
		return;
	}else{
		std::cout << "Queue: ";
		for(int i = 0; i < rear; i++){
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		return;
	}
}


template <class DataType>
miniArrQueue<DataType>& miniArrQueue<DataType>::operator=(const miniArrQueue<DataType>& rhs){
	if(this == &rhs){
		return *this;
	}
	delete[] arr;
	arr = new DataType[rhs.capacity];
	capacity = rhs.capacity;
	front = -1;
	rear = -1;
	for(int i = 0; i < rhs.rear; i++){
		enqueue(rhs.arr[i]);
	}
	return *this;
}
