#ifndef MINILISTQUEUE_H
#define MINILISTQUEUE_H
#include "miniDList.h"

template <class DataType> 
 class miniListQueue { 
    private: 
	miniDList<DataType> list; 
/** 
For  the  list-backed  implementation: 
* 
* 
For the array-based: 
* 
DataType* arr;  // The array of items 
int capacity; // The size of the current array 
int front; // The location of the front element 
int rear; // The location of the rear element 
*/ 
 public: 
miniListQueue ();  // Constructor  
miniListQueue(const miniListQueue & l); // Copy Constructor 
~miniListQueue(); //   Destructor 
int   size()   const; // get the number of elements in the queue 
 bool isEmpty() const; // Check if the queue is empty 
void  enqueue(const  DataType& e);  // Enqueue element at rear 
void  dequeue(); // dequeue element at front  
const DataType& front() const; //return the front element but not remove 
void  printQueue()  const; // Prints the queue from the front to the rear 
 miniListQueue<DataType>& operator=(const miniListQueue<DataType>& l); // Assignment operator 
};
//#include "miniListQueue.cpp"
#endif
