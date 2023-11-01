#include <iostream>
#include <vector>
#include <queue>
#include <ctime>
using namespace std;

void bubbleSort(vector<int>& a);
void insertionSort(vector<int>& vect, int n);
vector<int> mergeSort(vector<int>& arr);
vector<int> merge(vector<int> left, vector<int> right);
int Partition(vector<int> &v, int start, int end);
void Quicksort(vector<int> &v, int start, int end );

void selectionSort(vector<int> &sort);
void radixSort(vector<int> &v, int d);
void collect(queue<int> digitQueue[], vector<int> &v);
void distribute(const vector<int> &v, queue<int> digitQueue[], int power);
void heapSort(vector<int> &arr, int n);
void heapify(vector<int> &arr, int n, int i);




int main(int argc, char const *argv[])
{
	vector<int> bubble(10000);
	for(int i = 0; i < 10000; i++){
		bubble[i] = rand() % 39;
	}
	double start = double(clock()) / CLOCKS_PER_SEC; 

//	heapSort(bubble, 40);
	//bubbleSort(bubble);
	//insertionSort(bubble, 40);
	//mergeSort(bubble);
	//Quicksort(bubble, 0, 40);
	selectionSort(bubble);
//	radixSort(bubble, 2);
	double finish = double(clock()) / CLOCKS_PER_SEC;

	double elapsed = finish - start;
 	cout << elapsed << endl;
	vector<int> b(50);
        for(int i = 0; i < 50; i++){
                b[i] = rand() % 50;
        }
        double st = double(clock()) / CLOCKS_PER_SEC;

        //radixSort(b, 50);
	//heapSort(b, 50);
        //bubbleSort(b);
        //insertionSort(b, 50);
        //mergeSort(b);
        //Quicksort(b, 0, 50);
        selectionSort(b);

        double fin = double(clock()) / CLOCKS_PER_SEC;

        elapsed = fin - st;
        cout << elapsed << endl;
	
	vector<int> c(100);
        for(int i = 0; i < 100; i++){
                c[i] = rand() % 100;
        }
        double star = double(clock()) / CLOCKS_PER_SEC;

        //radixSort(c, 100);
	//heapSort(c, 100);
        //bubbleSort(c);
        //insertionSort(c, 100);
        mergeSort(c);
       // Quicksort(c, 0, 100);
        //selectionSort(c);

        double finis = double(clock()) / CLOCKS_PER_SEC;

        elapsed = finis - star;
        cout << elapsed << endl;




}

void bubbleSort(vector<int>& a)
{
      bool swapp = true;
      while(swapp){
        swapp = false;
        for (size_t i = 0; i < a.size()-1; i++) {
            if (a[i]>a[i+1] ){
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swapp = true;
            }
        }
    }
}

void insertionSort (vector<int>& vect, int n) 
{
int i, j, tmp;

 for (i=1; i<n; i++)
 {
     j=i;
     tmp=vect[i];
     while (j>0 && tmp<vect[j-1])
     {
           vect[j]=vect[j-1];
           j--;
     }
     vect[j]=tmp;
 }
}
vector<int> merge(vector<int> left, vector<int> right) {
	size_t ileft = 0, iright = 0;
	vector<int> results;
	while (ileft < left.size() && iright < right.size())
	    if (left[ileft] < right[iright])
	        results.push_back(left[ileft++]);
	    else
	        results.push_back(right[iright++]);
	while (ileft  < left.size() ) results.push_back(left [ileft++ ]);
	while (iright < right.size()) results.push_back(right[iright++]);
	return results;
}

vector<int> mergeSort(vector<int>& arr) {
	if (arr.size() <= 1)
		return arr;
	int len = arr.size() / 2;
	vector<int> left (arr.begin(), arr.begin() + len);
	vector<int> right(arr.begin() + len, arr.end());
	return merge(mergeSort(left), mergeSort(right));
}
int Partition(vector<int> &v, int start, int end){

	int pivot = end;
	int j = start;
	for(int i=start;i<end;++i){
		if(v[i]<v[pivot]){
			swap(v[i],v[j]);
			++j;
		}
	}
	swap(v[j],v[pivot]);
	return j;

}

void Quicksort(vector<int> &v, int start, int end ){

	if(start<end){
		int p = Partition(v,start,end);
		Quicksort(v,start,p-1);
		Quicksort(v,p+1,end);
	}

}

void selectionSort(vector<int> &sort){
	int vecsize = sort.size();
for (int j = 0; j < vecsize - 1; ++j) {

    int min = j;
    for (int i = j+1; i < vecsize; ++i) {
        if (sort.at(min) > sort.at(i)) {
            min = i;
        }

    }
    if (min != j)
        swap(sort.at(j), sort.at(min));
}
}
void collect(queue<int> digitQueue[], vector<int>& v){
        int i = 0, digit;
        for(digit = 0; digit < 10; digit++){
                while(!digitQueue[digit].empty()){
                        v[i] = digitQueue[digit].front();
                        digitQueue[digit].pop();
                        i++;
                }
        }
}
void distribute(const vector<int> &v, queue<int> digitQueue[], int power){
	cout << power << endl;
	int i;
	for(i = 0; i < v.size(); i++){
		digitQueue[(v[i] / power) % 10].push(v[i]);
	}
}
void radixSort(vector<int> &v, int d){
	int i;
	int power = 1;
	queue<int> digitQueue[10];
	for(i = 0; i < d; i++){
		distribute(v, digitQueue, power);
		collect(digitQueue, v);
		power *= 10;
	}
}
void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 

    
    if (l < n && arr[l] > arr[largest])
        largest = l;

    
    if (r < n && arr[r] > arr[largest])
        largest = r;

    
    if (largest != i) {
        swap(arr[i], arr[largest]);

        
        heapify(arr, n, largest);
    }
}


void heapSort(vector<int> &arr, int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    
    for (int i = n - 1; i >= 0; i--) {
        
        swap(arr[0], arr[i]);

        
        heapify(arr, i, 0);
    }
}
