/*  ClassArr.cpp
  Dynamically allocated array of ThreeDimPt objects.
  Lab 10, COSC-220
  Created: April 7, 2001
  Current: November 5, 2001
*/

#include "ThreeDimPt.h"

#include <iostream>


/* GetNumbPts
 * Prompts for and returns an int value.
 * Enforces the value being positive.
 */
int GetNumbPts();

/* MakeThreeDimPtArray
 * Constructs an array of ThreeDimPt objects.
 * Array is of length size.
 * Returns a pointer to the first element of the 
 * array.
 */
ThreeDimPt * MakeThreeDimPtArray(int size);

int main()
{
  int nPts = GetNumbPts();
  int i;

  ThreeDimPt * ptArr;  // array of ThreeDimPt objects

  ptArr = MakeThreeDimPtArray(nPts);
  // Set the x, y, and z values of each ThreeDimPt in the
  // array as x = i,  y = 2 * i,  z = 3 * i;
  //
  // Write your code here:
  for( i = 0; i < nPts; i++){

          ptArr[i] = ThreeDimPt(i,(2 * i),(3 * i));

  }
  // Print the array.
  // 
  // Write your code here:
for( i = 0; i < nPts; i++){
        cout << ptArr[i] << endl;
}
  return 0;
}


// Uncomment and define the function.
ThreeDimPt * MakeThreeDimPtArray(int size)
{
ThreeDimPt * arr = new ThreeDimPt[size];
ThreeDimPt *firstValue = &arr[0];
return firstValue;
}


int GetNumbPts()
{
  using namespace std;

  int n;

  cout << "How many points? ";
  cin >> n;

  while (n < 0)
    {
      cout << "Number can't be negative" << endl;
      cout << "How many points? ";
      cin >> n;
    }

  return n;
}

