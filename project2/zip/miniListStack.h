#ifndef MINILISTSTACK_H
#define MINILISTSTACK_H
#include "miniDList.h"
template <class DataType>
 class miniListStack{
private:
const int returnInt = -999999999;
miniDList<DataType> sList;
        /** 
For  the  list-backed  implementation: 
* 
* 
For the array-based: 
* 
enum {DEF_CAPACITY =100};  //default stack capacity 
DataType* arr; // The array of items 
int capacity; // The size of the current array 
int top; // The location of the top element 
*/ public:
         
        miniListStack();        // Constructor for ListStack 
        miniListStack(const miniListStack & l);  // Copy contstructor 
        ~miniListStack(); // Destructor 
        int  size()  const; // get the number of elements in the stack 
        bool isEmpty() const; // Check if the stack is empty 
        const DataType& top() const;       //get the top emement without popping it 
        void push(const DataType& e); // Pushes  an  object  onto  the  stack 
        void pop(); // Pop an object off the stack  
        void  printStack()  const; // Prints the stack from the top, down 

miniListStack<DataType>& operator=(const  miniListStack<DataType>& l);  //  Assignment  operator 
};
//#include "miniListStack.cpp"             //
#endif                                 
