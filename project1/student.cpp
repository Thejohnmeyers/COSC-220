//john Meyers
//COSC-220
//this implements the book funtions in order to create removes and other functions like print
#include "student.h"
#include "book.h"
#include <iostream>
using namespace std;
student::student(){
	list = nullptr;
	
}
student::~student(){
	book * newbook;
	book * curr;
	newbook = list;
	while(newbook != nullptr){
		curr = newbook->nextbook;
		delete newbook;
		newbook = curr;
	}
}

book * student::createBook(){
	book * newBook = new book();
	book * bookptr;
	string t, d, r;
	cout << "what is the title of the book?" << endl;
	cin >> newBook->Title;
	cout << "what is the due date of the book?" << endl;
	cin.ignore();
	cin >> newBook->duedate;
	cout << "is the book renewable?" << endl;
	cin.ignore();
	cin >> newBook->renewable;
	if(list == nullptr){
        	list = newBook;	//if there is no head, make the first book inserted point to head
    	}
    	else{
        	bookptr = list;	//if there are books in the list, point the new book to the last book
        	while(bookptr->nextbook){
            		bookptr = bookptr->nextbook; //while loop to proceed through the list until it finds the end
        }
        bookptr->nextbook = newBook;
	}
	return newBook;
}
void student::removebook(string booktitle){

    

    book * prevbook;
    book * bookptr;
	
	if(list == nullptr){ //if list is empty, nothing will be deleted
	return;
    }
	cout << list->Title << endl;
    if(list->Title == booktitle){ //if the first book is the target one, it will be deleted
 	
	bookptr = list->nextbook;
 	delete list;
 	list = bookptr;
	return;
    }
	else{ //iterate through the list until the book is found and delete it
 		bookptr = list;
		
	while(bookptr != nullptr && bookptr->Title != booktitle){ //while loop to proceed through list
		prevbook = bookptr;
		bookptr = bookptr->nextbook;
		
	}
	if(bookptr){
		prevbook->nextbook = bookptr->nextbook;
		delete bookptr;
		
        }else{
		cout<<"Book not found"<<endl;
        }
    }
}




void student::printbooklist(){
    book *bookptr;
    bookptr = list;
    while(bookptr){
        cout << bookptr->Title << ", ";
        cout << bookptr->duedate << ", ";
        cout << bookptr->renewable << endl;
        bookptr = bookptr->nextbook;
    }//prints out the book list for the specific student
}

