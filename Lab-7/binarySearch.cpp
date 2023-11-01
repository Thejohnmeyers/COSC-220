#include <iostream>
using namespace std;
template <typename T>

int bSearch(const T arr[], int first, int last, const T& target){
	if(first > last){
		return -1;
	}
	int mid = (first + last)/2;
	if(target == arr[mid]){
		return mid;
	}
	else if (target < arr[mid]){
		return bSearch(arr, first, mid-1, target);
	}
	else{
		return bSearch(arr, mid+1, last, target);
	}
}
int main(){
	int arr[] = {3, 6, 8, 32, 2, 67, 48};
	int target = 0;
	int n  = sizeof(arr)/sizeof(arr[0]);
	int first = 0;
	int last = n-1;
	cout << "what element are you looking for?: " << endl;
	cin >> target;
	int i = bSearch(arr, first, last, target);
	if(i != -1){
		cout << "Element found at: " << i << " index" << endl;
	}
	else{
		cout << "Element not found in the array." << endl;
	}
	return 0;
}
