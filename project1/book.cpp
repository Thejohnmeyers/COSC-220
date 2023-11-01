//John Meyers
//COSC-220
//the bookcpp file in order to make a book
#include "book.h"
#include <iostream>
#include <string>
using namespace std;

book::book(){ //constructor for book objects

    head = nullptr;
}

book::~book(){ //destructor for book objects
    book * bookptr;
    book * next;

    bookptr = head;

    while(bookptr != nullptr){ //while loop to traverse through list and delete all nodes
        next = bookptr->nextbook;
        delete bookptr;
        bookptr = next;
    }
}

void book::addbook(string title, string duedate, string renewable, book * newbook){
    

    newbook->Title = Title; //assign values to the member variables
    newbook->duedate = duedate;
    newbook->renewable = renewable;
    newbook->nextbook = nullptr;
}

