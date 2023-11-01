//John Meyers
//COSC-220
//this is the main for all of the functions and it displays a menu
#include "studentDlist.h"
#include <iostream>
using namespace std;
int main(){
	char answer;
	studentDlist stulist;
	cout << "would you like to enter the student function(Y/N)?" << endl;
	cin >> answer;
	if(answer == 'N'){
		cout << " have a good day!" << endl;
	}
	else if(answer == 'Y'){
		int menu = 0;
		while(menu != 8){
			menu = 0;
			cout << "1. create a student" << endl;
			cout << "2. update records" << endl;
			cout << "3. delete a student" << endl;
			cout << "4. print student list" << endl;
			cout << "5. create a book" << endl;
			cout << "6. remove a book" << endl;
			cout << "7. print books" << endl;
			cout << "8. exit program" << endl;
			cout << "enter the number in front of the action you want performed: " << endl;
			cin >> menu;
			if(menu == 1){
				stulist.insertStudent();
			}
			else if(menu == 2){
				int Id = 0;
				cout << "what is the students current ID number that you are looking to update?" << endl;
				cin >> Id;
				stulist.updateRecords(Id);
			}
			else if(menu == 3){
				int ID = 0;
				cout << "what is the students Id number you are looking to delete? " << endl;
				cin >> ID;
				stulist.deleteStudent(ID);
			}
			else if(menu == 4){
				stulist.printStudentlist();
			}
			else if(menu == 5){
				int ID = 0;
				cout << "what is the ID of the student you are trying to add a book too? " << endl;
				cin >> ID;
				student * stu = stulist.searchStudent(ID);
				if(stu == nullptr){
					cout << "invalid input goodbye." << endl;
					break;	
				}
				stu->createBook();
			}
			else if(menu == 6){
				int ID = 0;
				cout << "what is the ID of the student you are trying to delete a book from? " << endl;
				cin >> ID;
				student * stu = stulist.searchStudent(ID);
				string title;
				if(stu == nullptr){
                                        cout << "invalid input goodbye." << endl;
                                        break;
                                }

				cout << "what is the books title you want to remove? " << endl;
				cin >> title;
				stu->removebook(title);
			}
			else if(menu == 7){
				int ID =0;
				cout << "what is the ID of the student who you are trying to print their book list? " << endl;
				cin >> ID;
				student * stu = stulist.searchStudent(ID);
				if(stu == nullptr){
                                        cout << "invalid input goodbye." << endl;
                                        break;
                                }

				stu->printbooklist();
			}
			else if(menu == 8){
				
				stulist.~studentDlist();
				break;
			}
			else{
				cout << "invalid input goodbye!" << endl;
				break;
			}
		}
	}
		else{
			cout << "invalid input goodbye!" << endl;
		}


	}

