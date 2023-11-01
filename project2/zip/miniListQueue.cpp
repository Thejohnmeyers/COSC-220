#include <iostream>
#include "miniListQueue.h"
using namespace std;


template <class DataType>
miniListQueue<DataType>::miniListQueue(){
 
}	// Constructor  
template <class DataType>
miniListQueue<DataType>::miniListQueue(const miniListQueue & l){
       *this = l;
}	// Copy Constructor 
template <class DataType>
miniListQueue<DataType>::~miniListQueue(){

}	//   Destructor 
template <class DataType>
int  miniListQueue<DataType>::size()   const{
       return list.size();
}	// get the number of elements in the queue 
template <class DataType>
bool miniListQueue<DataType>::isEmpty() const{
	
	if(list.front() == -1){
	       return false;
       }
       else{
	       return true;
       }

}	// Check if the queue is empty 
template <class DataType>
void  miniListQueue<DataType>::enqueue(const  DataType& e){
     list.addBack(e); 
}	// Enqueue element at rear 
template <class DataType>
void  miniListQueue<DataType>::dequeue() {
       list.removeFront();
}	// dequeue element at front  
template <class DataType>
const DataType& miniListQueue<DataType>::front() const{
       return list.front();
}	//return the front element but not remove 
template <class DataType>
void  miniListQueue<DataType>::printQueue()  const{
       /*if(isEmpty() == false){
	       cout << "nothing is in the queue" << endl;
	       return;
       }
       else{*/
	list.display();
	return;
 	//}
}	// Prints the queue from the front to the rear 
template <class DataType>
 miniListQueue<DataType>& miniListQueue<DataType>::operator=(const miniListQueue<DataType>& l){
	if(this == &l){
                return *this;
        }else{
		while(this.front()){
			this.dequeue();
		}
		while(l.front()){
			this.enqueue(l.front());
			l.dequeue();
		}
		return *this;
 	}
 }
