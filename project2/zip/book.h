//John Meyers
//COSC-220
//the functions for the book objects
#include <iostream>
#include <string>
using namespace std;
#ifndef BOOK_H
#define BOOK_H
class book{
	public:
	string Title; //the title

	string duedate; //the due date

	string renewable; //specify if the book is renewable or not
        
	book * nextbook; //pointer to next book in the list

	book * head = nullptr; //pointer to beginning of list

	book(); //constructor
	~book(); //destructor

	void addbook(string title, string duedate, string renewable, book * newbook); //add a book to the list of books

	
};
#endif
