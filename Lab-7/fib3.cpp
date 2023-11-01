#include<iostream>
#include <ctime> 
using namespace std;
 
int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
 
int main()
{
    double start = double(clock()) / CLOCKS_PER_SEC;
	int i=0;
    int n = 50;
 
 
    while(i<n)
    {
        cout<<fibonacci(i) << endl;
        i++;
    }
 double finish = double(clock()) / CLOCKS_PER_SEC;

double elapsed = finish - start;
cout << "the amount of time this binary recursion took was: " << elapsed << " seconds " << endl;
    return 0;
}
