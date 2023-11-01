//Nick Krisulevicz
//Teammate: John Meyers
//COSC 220 - Project 2
//11/12/2021
//miniArrQueue.h

#ifndef MINIARRQUEUE_H
#define MINIARRQUEUE_H
#include "miniDList.h"
#include <iostream>
using namespace std;

template <class DataType> 
class miniArrQueue { 

private: 
	//For  the  list-backed  implementation: 
	miniDList<DataType> list; 

	//For the array-based: 
	DataType* arr;  // The array of items 

	int capacity; // The size of the current array 

	int front; // The location of the front element 

	int rear; // The location of the rear element 

	int count; //Current size of the queue

public: 
	miniArrQueue ();  // Constructor  

	miniArrQueue(const miniArrQueue & e); // Copy Constructor 

	~miniArrQueue(); //   Destructor 

	int size()   const; // get the number of elements in the queue 

	bool isEmpty() const; // Check if the queue is empty 

	void  enqueue(const  DataType& e);  // Enqueue element at rear 

	void  dequeue(); // throw(QueueEmpty); // dequeue element at front  

	const DataType& printFront(); //const; //throw(QueueEmpty); //return the front element but not remove 

	void  printQueue(); //  const; // Prints the queue from the front to the rear 

	miniArrQueue<DataType>& operator=(const miniArrQueue<DataType>& rhs); // Assignment operator 

	friend std::ostream& operator<<(std::ostream &out, const miniArrQueue<DataType>& d){
        if(d.front == d.rear){
            out << "Queue is Empty" << std::endl;
            return out;
        }else{
            out << "Queue: ";
            for(int i = 0; i < d.rear; i++){
                out << d.arr[i] << " ";
            }
            out << std::endl;
            return out;
        }
	}
};
//#include "miniArrQueue.cpp"              //for template instantiation
#endif
