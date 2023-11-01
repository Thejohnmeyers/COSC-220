#include <iostream>
using namespace std;
#include <ctime>
int main(){
	double start = double(clock()) / CLOCKS_PER_SEC;
	double fib = 1;
	for(int i = 0; i < 50; i++){
		fib = 1;
		if(i < 2){
			cout << "1" << endl;
		}
		if(i >= 2){
			fib = fib*(i-1) + fib*(i-2);
			cout << fib << endl;
		}
	}

double finish = double(clock()) / CLOCKS_PER_SEC;

double elapsed = finish - start;
cout << "this amount of time the iterative function took was: " << elapsed << " seconds"  << endl;
}
