template <class DataType> 
 class miniXXXQueue { 
    private: 
/** 
For  the  list-backed  implementation: 
* 
miniDList<DataType> list; 
* 
For the array-based: 
* 
DataType* arr;  // The array of items 
int capacity; // The size of the current array 
int front; // The location of the front element 
int rear; // The location of the rear element 
*/ 
 public: 
miniXXXQueue ();  // Constructor  
miniXXXQueue(const miniXXXQueue &); // Copy Constructor 
~miniXXXQueue(); //   Destructor 
int   size()   const; // get the number of elements in the queue 
 bool isEmpty() const; // Check if the queue is empty 
void  enqueue(const  DataType& e);  // Enqueue element at rear 
void  dequeue() throw(QueueEmpty); // dequeue element at front  
const DataType& front() const throw(QueueEmpty); //return the front element but not remove 
void  printQueue()  const; // Prints the queue from the front to the rear 
 miniXXXQueue<DataType>& operator=(const miniXXXQueue<DataType>&); // Assignment operator 
} 
#include <”miniQueue.cpp”>              //for template inst
