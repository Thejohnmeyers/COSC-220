// File: bst_main.cpp
// try type template shadow

#include <iostream>
#include "d_except.h"
#include "project3_bstree.h"		// stree class


using namespace std;


int main()
{
	int arr[] = {3, 6, 33, 55, 5, 15, 25};
	int arrSize = sizeof(arr)/sizeof(int);
	stree<int> int_str;
	stnode<int> *t = NULL;
    for(int i=0; i<arrSize; i++)
       int_str.insert(arr[i]);
    int_str.displayTree(t);
	cout << endl;
	return 0;
}

/*
template <typename T>
void removeDuplicates(vector<T>& v)
{
   // insert vector data into binary search tree t
   stree<T> t;
   // declare iterators for t and v
	typename stree<T>::iterator treeIter;
	typename vector<T>::iterator vectorIter;
   
   // insert each vector element into the search tree,
	// ignoring duplicate values
   vectorIter = v.begin();
	while (vectorIter != v.end())
	{
	  t.insert(*vectorIter);
	  vectorIter++;
	}
   
	// clear the vector
	v.resize(0);

   // traverse tree in ascending order, pushing each element
	// onto the back of v using push_back()
   treeIter = t.begin();
	
	while (treeIter != t.end())
	{
      v.push_back(*treeIter);
		treeIter++;
	}
}
*/

/*
Run:

2  3  5  6  15  25  33  55
*/
