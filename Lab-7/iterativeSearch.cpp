#include <iostream>
using namespace std;
int binSearch_iterative(int arr[], int n, int target){
	int first = 0;
	int last = n-1;
	while (first <= last){
		int curr = (first+last)/2;
		if(target == arr[curr]){
			return curr;
		}
		else if(target < arr[curr]){
			last  = curr - 1;
		}
		else{
			first = curr + 1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {4, 5, 2 ,8, 10, 15, 16};
	int target = 10;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "what is the number you are looking for in the array? " << endl;
	cin >> target;
	int i = binSearch_iterative(arr, n, target);
	if(i != -1){
		cout << "element found at: " << i << " index" << endl;
	}
	else{
		cout << "element not found in array" << endl;
	}
	return 0;
}
