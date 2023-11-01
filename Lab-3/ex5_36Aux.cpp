/*
  ex5_36Aux.h
  Exercise 36, Chapter 5, Ford/Topp "Data Structures With C++ using STL"
  For Cosc-220  Lab
  Thomas Anastasio
  Created: November 5, 2002
  Current: November 5, 2002
*/

/********************  as provided on K drive *****************/

#ifndef EX5_36AUX_H
#define EX5_36AUX_H

#include "d_rect.h"
#include <iostream>
using namespace std;
// getRoomArray
// Constructs and returns an array of pointers to rectangle.
// The number of rooms is obtained by prompting and reading from the
// keyboard.
// Each pointer points to a dynamically allocated rectangle object.
// The actual array size is one more than the number of rooms.  The last
// entry of the array is a NULL pointer.  This can be used as a sentinel
// for end of array.
rectangle ** getRoomArray(){
	int numRooms = 0;
	cout << "enter the number of rooms: ";
	cin >> numRooms;
	rectangle * arr = new rectangle[numRooms++];
	rectangle ** arr2 = &arr;
	arr2[numRooms + 1] = NULL;	
	return arr2;// returns an array of rectangle objects pointing to reftangle objects
}

// getRoomData
// PreCondition:  rooms is a properly constructed array of pointers 
// to rectangle (see documentation for getRoomArray)
// Prompts for length and width of each room (i.e. rectangle) and gets those 
// data from the keyboard.
// PostCondition: each room has received its length and width from the keyboard
void getRoomData(rectangle ** rooms){
	double len, wid;
	for(int i =0; i < sizeof(rooms);i++){
	cout << "what is the length of the room? " << endl;
	cin >> len;
	cout << "what is the width of the room? " << endl;
	cin >> wid;// this makes the user enter their own width and length
	rooms[i]->setSides(len, wid);// this the sets those values to the actual value of the sides the user inputted
	}

}

// getTotalArea
// Returns the total area of the rooms on the array of pointers to rectangle.
// Precondition: the array is properly constructed (see documentation for getRoomArray)
double getTotalArea(rectangle ** rooms){
	double area;
	for(int i = 0; i <sizeof(rooms); i++){
		area = area + (rooms[i]->getLength() * rooms[i]->getWidth());// this setss the variable area to the area plus the area 
	}
	return area;
}

// largestPerimeter
// Returns a copy of the room that has the largest perimeter of all the rooms.
// Precondition: rooms is properly constructed (see documentation for getRoomArray) 
rectangle largestPerimeter(rectangle ** rooms){
	int count = 0;
	int perimeter = (2 * rooms[0]->getLength()) + (2 * rooms[0]->getWidth());
	int peri2;
	rectangle * largePerm = rooms[0];
	for(int i = 1; i < sizeof(rooms); i++){
		peri2 = (2 * rooms[i]->getLength()) + (2 * rooms[i]->getWidth());
		if(perimeter < peri2){
			largePerm = rooms[i];// checks to make sure the perimeter is the largest and if it is then it sets the perimeter
		}
		perimeter = (2 * rooms[i]->getLength()) + (2 * rooms[i]->getWidth());


	}
	return *largePerm;
}

// reportOnLargest
// Prints a report on largeRoom.
// The report gives the perimeter of largeRoom as well as its dimensions.
void reportOnLargest(rectangle & largeRoom){
	cout << " the largest room in the array of rooms dimensions are length:"<< largeRoom.getLength() << " and width: " <<largeRoom.getWidth() << endl; 
}

// reportOnTotalArea
// Prints a report on the total area in rooms.
// Precondition: rooms is properly constructed (see documentation for getRoomArray) 
void reportOnTotalArea(rectangle ** rooms){
	double area = getTotalArea(rooms);
	cout << "the total area is equal to " << area << endl;
}

#endif
