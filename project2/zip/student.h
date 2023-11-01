//JOhn Meyers
//Cosc-220
//the function declarations for the student objects
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "book.h"
using namespace std;
class student{
	public:
		string year;
		string name;
		int idNumber;
		book * list;
		void removebook(string booktitle);
		book * createBook();
		student * next;
		student * prev;
		student();
		~student();
		void printbooklist();
		bool operator==(const student& s);
				
			
};
#endif
