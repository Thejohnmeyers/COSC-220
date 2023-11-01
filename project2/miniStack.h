template <class DataType> 
 class miniListStack{ 
private: 

miniDList<DataType> list; 
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
	miniListStack (int cap= DEF_CAPACITY); // Constructor for ArrStack 
	miniListStack();        // Constructor for ListStack 
	miniListStack(const miniListStack &);  // Copy contstructor 
	~miniListStack(); // Destructor 
	int  size()  const; // get the number of elements in the stack 
	bool isEmpty() const; // Check if the stack is empty 
	const DataType& top() const throw(StackEmpty);       //get the top emement without popping it 
	void push(const DataType&) throw(StackFull); // Pushes  an  object  onto  the  stack 
	void pop() throw(StackEmpty); // Pop an object off the stack  
	void  printStack()  const; // Prints the stack from the top, down 
  
miniListStack<DataType>& operator=(const  miniListStack<DataType>&);  //  Assignment  operator 
} 
#include <”miniStack.cpp”>              //
