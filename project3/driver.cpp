#include <iostream>
#include "d_except.h"
#include "project3_bstree.h"            // stree class


using namespace std;
int main(){
	int arr[] = {10,25,26,28,29,30,34,35,40,50,65};
	int arrsize = sizeof(arr)/sizeof(int);
	stree<int> bst;
	stnode<int> *t = nullptr;
	for(int i = 0; i <arrsize; i++){
		bst.insert(arr[i]);
	}
	cout << "the minimal value of this binary tree is " << bst.min() << endl;
	bst.displayTree(t);
	cout << endl;
	bst.insert(33);
	bst.displayTree(t);
	cout << endl;
	bst.erase(26);
	bst.displayTree(t);
	cout << endl;
	bst.erase(35);
	bst.displayTree(t);
	cout << endl;
	bst.erase(30);
	bst.displayTree(t);
	cout << endl;
	char arr2[]= { 'S','J', 'K', 'L', 'X', 'F', 'E', 'Z' };
	stree<char> chartree;
	stnode<char> *ch = nullptr;
	for(int i = 0; i < 7; i++){
		chartree.insert(arr2[i]);
	}
	cout << "the minimal value of this binary tree is " << chartree.min() << endl;
	chartree.displayTree(ch);
	cout << endl;
	chartree.insert('H');
	chartree.displayTree(ch);
	cout << endl;
	chartree.erase('F');
	chartree.displayTree(ch);
	cout << endl;
}

