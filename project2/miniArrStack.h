//Nick Krisulevicz
//Teammate: John Meyers
//COSC 220 - Project 2
//11/12/2021
//miniArrStack.h

#ifndef MINIARRSTACK_H
#define MINIARRSTACK_H
//#include "miniDList.h"
#include <iostream>
using namespace std;

enum {DEF_CAPACITY =100};  //default stack capacity 
template <class DataType> 
class miniArrStack{ 

private: 
	//For  the  list-backed  implementation: 
//	miniDList<DataType> list; 

	//For the array-based: 
	//enum {DEF_CAPACITY =100};  //default stack capacity 

	DataType* arr; // The array of items 

	int capacity; // The size of the current array 

	int top; // The location of the top element 

	void enlarge(); //Private function to expand the boundaries of the array

public: 
    	miniArrStack (int cap); // Constructor for ArrStack 

   	miniArrStack(); // Constructor for ListStack 

   	miniArrStack(const miniArrStack &);  // Copy contstructor 

   	~miniArrStack(); // Destructor 

   	int  size()  const; // get the number of elements in the stack 

    	bool isEmpty() const; // Check if the stack is empty 

    	const DataType& printTop(); // const throw(StackEmpty); //get the top emement without popping it 

    	void push(const DataType& e); // throw(StackFull); // Pushes  an  object  onto  the  stack 

    	void pop(); // throw(StackEmpty); // Pop an object off the stack  

    	void printStack()  const; // Prints the stack from the top, down 

    	miniArrStack<DataType>& operator=(const  miniArrStack<DataType>& rhs);  //  Assignment  operator 

	friend std::ostream& operator<<(std::ostream &out, const miniArrStack<DataType>& d){
        std::cout << "Stack: " << std::endl;
        for(int i = 0; i < d.capacity; i++){
            out << d.arr[i] << std::endl;
        }
            out << std::endl;
            return out;
    }
};
//#include "miniStack.cpp" //for template instantiation 
#endif
