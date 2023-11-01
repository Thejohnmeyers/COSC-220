//John Meyers
//COSC-220
#include "miniDList.cpp"
#include "miniListStack.cpp"
#include "miniListQueue.cpp"
#include "student.h"
#include <iostream>
#include <stack>
using namespace std;



int main(){
	char answer;
	miniListStack<int> stack;
	miniListQueue<int> queue;
	cout << "Would you like to enter the program?(Y/N) " << endl;
	cin >> answer;
	if(answer == 'N'){
                cout << " have a good day!" << endl;
        }
        else if(answer == 'Y'){
		int menu = 0;
		int pushElement, enque;
		while(menu != -1){
			menu = 0;
			cout << "-1. to exit the program" << endl;
			cout << "1. push an element onto the list stack" << endl;
			cout << "2. pop an element off of the list stack" << endl;
			cout << "3. prints the top of the list stack" << endl;
			cout << "4. prints the list stack" << endl;
			cout << "5. enqueue an element onto the list queue" << endl;
			cout << "6. dequeue an element off of the list queue" << endl;
			cout << "7. prints the first element in the list queue" << endl;
			cout << "8. prints the list queue" << endl;
			cout << "enter the number in front of the action you want performed: " << endl;
			cin >> menu; 
			if(menu == -1){
				cout << "goodbye!" << endl;
				break;
			}
			else if(menu == 1){
				
				cout << "what is the element you would like to push? " << endl;
				cin >> pushElement;
				stack.push(pushElement);
			}
			else if(menu == 2){
				stack.pop();
			}
			else if(menu == 3) {
				if(stack.top() == -999999999){
					cout << "stack is empty" << endl;
				}
				else{
				cout << "the top of the current list stack is: " << stack.top() << endl;
			
				}
			}
			else if(menu == 4){
				stack.printStack();
			}
			else if(menu == 5){
				cout << "what is the element you would like to enqueue? " << endl;
				cin >> enque;
				queue.enqueue(enque);
			}
			else if(menu == 6){
				queue.dequeue();
			}
			else if(menu == 7){
				cout << "the first element of the current list queue is: " << queue.front() << endl;
			}
			else if(menu == 8){
				queue.printQueue();
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
