//john Meyers
//Cosc-220
//the functions declarations for the doubly linked list
#ifndef STUDENTDLIST_H
#define STUDENTDLIST_H
#include "student.h"
class studentDlist{
	public:
		student * header;
		studentDlist();
		~studentDlist();
		student * createStudent();
		student * searchStudent(int ID);
		void insertStudent();
		void updateRecords(int ID);
                void deleteStudent(int ID);
                void printStudentlist();

};
#endif
