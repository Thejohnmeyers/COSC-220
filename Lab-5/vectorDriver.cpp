#include "vectorAux.h"
#include <vector>
#include <iostream>
using namespace std;
// Put a bunch of integer values into vect
void fillVector(std::vector<int> & vect);

int main()
{
  using namespace std;

  // Declare an empty vector of int
  vector<int> vect;

  ///////////////  Test removeDup ///////////////
  // Fill vect with values and write it out
  fillVector(vect);
  cout << "Testing removeDup" << endl;
  cout << "Original vector is  ";
  writeVector(vect);

  // Remove the duplicates and write it out again
  removeDup(vect);
  cout << "Vector with duplicates removed is  ";
  writeVector(vect);
  cout << endl;
  writeVector(vect);

  return 0;
}

  
void fillVector(std::vector<int> & vect)
{
  int arr[] = {1,7,2,7,9,1,2,8,9};
  unsigned arrsize = sizeof(arr)/sizeof(int);

  vect = std::vector<int>(arr, arr+arrsize);
}

