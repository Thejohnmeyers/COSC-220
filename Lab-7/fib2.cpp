#include <iostream>
#include <ctime>
using namespace std;
int fib(int term, int val, int i)
{
	if(term == 0)
	       	return i;
	else{
		cout << val << endl;
		return fib(term - 1, val+i, val);

	}
}
int main(){
	

	double start = double(clock()) / CLOCKS_PER_SEC;
	int val = 1;
	int i=0;
	int n = 50;


	
		cout<<fib(n, val, i) << endl;
		

    


    double finish = double(clock()) / CLOCKS_PER_SEC;

    double elapsed = finish - start;
	cout << "the time this program took was: " << elapsed << " seconds" <<  endl;
	return 0;
}
