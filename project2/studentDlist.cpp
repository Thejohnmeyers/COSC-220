//John Meyers
//COSC 220
//This file creates the doubly linked list for students
#include "studentDlist.h"
studentDlist::studentDlist(){
	header = nullptr;
}//sets the first student node in the list to null
studentDlist::~studentDlist(){
	student * remove = nullptr;
	student * curr =  nullptr;
	remove = header;
	while(remove != nullptr){
		curr = remove->next;
		delete remove;//deletes all the student nodes
		remove = curr;
	}
}
void studentDlist::printStudentlist(){
        student * curr = nullptr;
        curr = header;
        int count = 0;
	
        while(curr != nullptr){
                
		count++;
                cout << "student " << count << " id number is: " << curr->idNumber << endl;
                cout << "student " << count << " year is: " << curr->year << endl;
                cout << "student " << count << " name is: " << curr->name << endl;
                curr = curr->next;//prints out the student nodes and syntaxes throughout the doubly linked list
        }
}
void studentDlist::insertStudent(){
	student * newStudent = createStudent();
	student * curr = nullptr;
	if(header == nullptr){
                header = newStudent;
                newStudent->next = nullptr;
                newStudent->prev = nullptr;
                return;
        }//puts the student created object into the front of the list if there is no students defined already
        curr = header;
        if(header != nullptr){
                while(curr->next != nullptr){
                        curr = curr->next;
                } //syntaxes through list
                curr->next = newStudent;
                newStudent->prev = curr;
                newStudent->next = nullptr;//makes sure the list isnt lost as making it new
                
}

}
void studentDlist::updateRecords(int ID){
        student * curr = nullptr;
        int count = 0;
        if(header == nullptr){
                cout << "there are no records to update" << endl;
                return;
        }
        curr = header;// checks to see if there are any records to update

        if(header != nullptr){
                while(curr->idNumber != ID){
                        curr = curr->next;
                        count++;//syntaxes through list
                }
                if(curr == nullptr && count >= 1){
                        cout << "no student has this ID number. " << endl;
                        return;
                }
                cout << "what is the students updated year? " << endl;
                cin >> curr->year;
                cout << "what is the students new name?(no spaces) " << endl;
                cin >> curr->name;
                cout << "what is the students new id number?" << endl;
                cin >> curr->idNumber;
        }//updates teh students records
}
void studentDlist::deleteStudent(int ID){
        student * curr = nullptr;
        student * del = nullptr;
        
        if(header == nullptr){
                cout << "there is no student to delete within the list" << endl;
                return;
        }//checks to see if there are any students in the list
        curr = header;
	
        if(header != nullptr){
		
                if(curr->idNumber == ID){
                        delete curr;
                	header = nullptr;
			return;
                }//checks if the one to delete is teh header

		while(curr->idNumber != ID){
                        curr = curr->next;
                        
                }
                if(curr == nullptr){
                        cout << "no student has this ID number. " << endl;
                        return;
                }//checks to see if the ID is in the list
		
		else if(curr->next == nullptr){
			del = curr->prev;
			delete curr;
			del->next = nullptr;
		}//makes sure if the value is at the end of the list the last value points to null ptr
		else{
                del = curr->prev;
                del->next = curr->next;
                curr->next->prev = del;
                delete curr;//makes everything point to the right spot
		}


}
}
student* studentDlist::createStudent(){
        student * newStudent = new student();
        cout << "what is the students year? " << endl;
        cin >> newStudent->year;
        cout << "what is the students name?(no spaces)" << endl;
        cin.ignore();
	cin >>  newStudent->name;
        cout << "what is the students id number? " << endl;
        cin.ignore();
	cin >> newStudent->idNumber;
        return newStudent;//creates a student
}
student * studentDlist::searchStudent(int ID){
	student * newStudent = nullptr;
	if(header == nullptr){
		return nullptr;
	}
	newStudent = header;
	if(newStudent->idNumber == ID){
		return header;
	}
	else{
		while(newStudent->idNumber != ID){
			newStudent = newStudent->next;
		}
		if(newStudent->idNumber == ID){
			return newStudent;
		}
		else{
			cout << " this student is not in the list" << endl;
			newStudent = nullptr;
			return newStudent;
		}//searches and returns a student 
	}
}
