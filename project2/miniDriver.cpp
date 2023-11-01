// written by John Meyers
//COSC-220
#include "miniDList.cpp"
#include "miniListStack.cpp"
#include "miniListQueue.cpp"
#include "miniArrStack.cpp"
#include "miniArrQueue.cpp"
#include "studentDlist.h"
#include <iostream>
#include <stack>
using namespace std;



int main(){
	char answer;
	int count = 0;
	int count2 = 0;
	miniListStack<student> stack;
	miniListQueue<student> queue;
	miniArrStack<student> ArrStack;
	miniArrQueue<student> ArrQueue;
	cout << "Would you like to enter the program?(Y/N) " << endl;
	cin >> answer;
	if(answer == 'N'){
                cout << " have a good day!" << endl;
        }
        else if(answer == 'Y'){
		int menu = 0;
		student s, s2, s3, s4;
		while(menu != -1){
			menu = 0;
			cout << "-1. to exit the program" << endl;
			cout << "list functions:" << endl;
			cout << "1. push an element onto the list stack" << endl;
			cout << "2. pop an element off of the list stack" << endl;
			cout << "3. prints the top of the list stack" << endl;
			cout << "4. prints the list stack" << endl;
			cout << "5. enqueue an element onto the list queue" << endl;
			cout << "6. dequeue an element off of the list queue" << endl;
			cout << "7. prints the first element in the list queue" << endl;
			cout << "8. prints the list queue" << endl;
			cout << "array functions:" << endl;
			cout << "9. push an element onto the array stack" << endl;
                        cout << "10. pop an element off of the array stack" << endl;
                        cout << "11. prints the top of the array stack" << endl;
                        cout << "12. prints the array stack" << endl;
                        cout << "13. enqueue an element onto the array queue" << endl;
                        cout << "14. dequeue an element off of the array queue" << endl;
                        cout << "15. prints the first element in the array queue" << endl;
                        cout << "16. prints the array queue" << endl;

			cout << "enter the number in front of the action you want performed: " << endl;
			cin >> menu; 
			if(menu == -1){
				cout << "goodbye!" << endl;
				break;
			}
			else if(menu == 1){
				cout << "what is the students year? " << endl;
			        cin >> s.year;
			        cout << "what is the students name?(no spaces)" << endl;
			        cin.ignore();
				cin >>  s.name;
				cout << "what is the students id number? " << endl;
				cin.ignore();
			        cin >> s.idNumber;
				count = 0;
				count++;
				cout << "now pushing the student onto the stack" << endl;
				stack.push(s);
			}
			else if(menu == 2){
				count--;
				stack.pop();
			}
			else if(menu == 3) {
				if(count >= 1){

				student temp = stack.top();
				cout << "the top of the current list stack is: " << temp.name << ", id number: " << temp.idNumber << endl;
				}
				else{
					cout << "the list stack is empty" << endl;
				}
				
			}
			else if(menu == 4){
				stack.printStack();
			}
			else if(menu == 5){
				cout << "what is the students year? " << endl;
                                cin >> s2.year;
                                cout << "what is the students name?(no spaces)" << endl;
                                cin.ignore();
                                cin >>  s2.name;
                                cout << "what is the students id number? " << endl;
                                cin.ignore();
                                cin >> s2.idNumber;
				count2 = 0;
				count2++;
				cout << "now pushing the student onto the queue" << endl;
				queue.enqueue(s2);
			}
			else if(menu == 6){
				queue.dequeue();
				count2--;
			}
			else if(menu == 7){
				if(count2 >= 1){
				student temp = queue.front();
				cout << "the first element of the current list queue is: " << temp.name << ", id number: " << temp.idNumber << endl;
			
				}
				else{
					cout << "the list queue is empty" << endl;
				}
			}
			else if(menu == 8){
				queue.printQueue();
			}
			else if(menu == 9){
				cout << "what is the students year? " << endl;
                                cin >> s3.year;
                                cout << "what is the students name?(no spaces)" << endl;
                                cin.ignore();
                                cin >>  s3.name;
                                cout << "what is the students id number? " << endl;
                                cin.ignore();
                                cin >> s3.idNumber;
                                cout << "now pushing the student onto the stack" << endl;
				ArrStack.push(s3);
			}
			else if(menu == 10){
				ArrStack.pop();
			}
			else if(menu == 11){
				ArrStack.printTop();
			}
			else if(menu == 12){
				ArrStack.printStack();
			}
			else if(menu == 13){
				cout << "what is the students year? " << endl;
                                cin >> s4.year;
                                cout << "what is the students name?(no spaces)" << endl;
                                cin.ignore();
                                cin >>  s4.name;
                                cout << "what is the students id number? " << endl;
                                cin.ignore();
                                cin >> s4.idNumber;
				cout << "now pushing the student onto the queue" << endl;
				ArrQueue.enqueue(s4);
			}
			else if(menu == 14){
				ArrQueue.dequeue();
			}
			else if(menu == 15){
				ArrQueue.printFront();
			}
			else if(menu == 16){
				ArrQueue.printQueue();
			}
			else{
				cout << "Invalid input" << endl;
			}
		}
	}
	else{
		cout << "invalid input goodbye!" << endl;
	}
}
