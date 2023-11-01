/*
  Pointers.cpp
  COSC-220 Lab 9
  Based on a lab designed by Thomas Horseman

  Thomas Anastasio
  Created: April 8, 2001
  Current: March 20, 2003
*/

#include <iostream>
#include <stddef.h>     // for NULL definition

int main()
{
  using namespace std;

  int int1 = 1, int2 = 2, int3 = 3;
  double dub1 = 1.0, dub2 = 2.0, dub3 = 3.0;
  float flt1 = 1.0f;
  char chr1 = 'a', chr2 = 'b';

  //////////////////////////////////////////////////////////////////	
  // 1. Experiment with storage sizes and addresses of various data
  // types.
  //////////////////////////////////////////////////////////////////	
  //  A.  Add statements to print the addresses of each of the 9
  //  variables declared above and record the addresses.
cout << &int1 << " " << &int2 << " " << &int3 << " " << &dub1 << " " << &dub2 << " " << &dub3 << " " << &flt1 << " " << &chr1 << " " << &chr2 << endl;
  //  B.  Add statements to print the sizes (in bytes) of each of the
  //  9 variables  (use the sizeof operator).
cout << sizeof(int1) << " " << sizeof(int2) << " " << sizeof(int3) << " " << sizeof(dub1) << " " << sizeof(dub2) << " " << sizeof(dub3) << " " << sizeof(flt1) << " " << sizeof(chr1) << " " << sizeof(chr2) << endl;
  //  C.  Add statements to print the sizes of the addresses of the 9
  //  variables (again, use the sizeof operator).
cout << sizeof(&int1) << " " << sizeof(&int2) << " " << sizeof(&int3) << " " << sizeof(&dub1) << " " << sizeof(&dub2) << " " << sizeof(&dub3) << " " << sizeof(&flt1) << sizeof(&chr1) << " " << sizeof(&chr2) << endl;

  //  Write your code here:





  cout << "-----------------------------------------" << endl << endl;

  // Record your results here:
  //  
  //  Variable  Size   Address   Address-Size
  //   int1	4	0x7ffef4e94270		8
  //   int2	4	 0x7ffef4e94274 	8
  //   int3	4	 0x7ffef4e94278 	8
  //   dub1	8	 0x7ffef4e94280 	8
  //   dub2	8	 0x7ffef4e94288 	8
  //   dub3	8	 0x7ffef4e94290 	8
  //   chr1	1	 ab 			8
  //   chr2	1	 b			8


  // How many bytes of storage is allocated for each data type?  How
  // many bytes is allocated for each pointer (address). Notice that
  // the data types are not necessarily the same size, but the
  // pointers are.
  // 4 for int, 8 for doubles, and 1 for char but pointers all have 8
  // Did the address of the char variables print as you expected?  If
  // not, why not?   You can force the printed output to be
  // interpreted as a pointer by coercing it (casting) to void* like
  // this:
  //    cout << (void *) &chr1;
  //
  // Run the program again, using the coercion for the char
  // pointers. Record your data.

  // Write your modified code here:

cout << (void *) &chr1 << (void *) &chr2 << endl;


  cout << "-----------------------------------------" << endl << endl;


  // Record your results here:
  //  
  //  Variable  Size   Address   Address-Size
  //     chr1	1	0x7ffc0448a55e		8
  //     chr2	1	0x7ffc0448a55f		8


  //////////////////////////////////////////////////////////////////	
  // 2. Experiment with pointer variables.
  //////////////////////////////////////////////////////////////////	
  //   A. Declare pointer vaiables intPtr1, intPtr2, intPtr3, dubPtr1,
  //   dubPtr2, dubPtr3, fltPtr1, chrPtr1, and chrPtr2 so that they
  //   can be used to point to the  appropriate variables.  Assign the
  //   address of the appropriate variable to them and print their
  //   values.  (The char pointers will have to be coerced as before
  //   for printing).

  //  Write your code here:
	int* intPtr1 = &int1;
	int* intPtr2 = &int2;
       int* intPtr3 = &int3;
       double* 	dubPtr1 = &dub1;
	double*  dubPtr2 = &dub2;
       double*	dubPtr3= &dub3;
       float* fltPtr1 = &flt1;
       char* chrPtr1 =  &chr1;
	char*  chrPtr2 =  &chr2;
  	cout << intPtr1 << " " << intPtr2 << " " << intPtr3 << " " << dubPtr1 << " " << dubPtr2 << " " << dubPtr3 << " " << fltPtr1 << " " <<(void *)  &chrPtr1 << " " <<(void *)  &chrPtr2 << endl;
  cout << "-----------------------------------------" << endl << endl;

  //  Report your results here:
  // 
  //   Pointer  Printed
  //  Variable   Value
  //   intPtr1	0x7ffca9f696c8 
  //   intPtr2	0x7ffca9f696cc 
  //   	intPtr3	0x7ffca9f696d0 
  //   dubtPtr1	0x7ffca9f696d8 
  //   dubPtr2		0x7ffca9f696e0 
  //   dubPtr3		0x7ffca9f696e8 
  //   fltPtr1	0x7ffca9f696d4 
  //   chrPtr1	0x7ffca9f696f0 
  //   chrPtr2	0x7ffca9f696f8
 
  

  // How do the values of the pointers compare to the values of the
  // addresses you got in the previous experiment?
	// they are the exact same
  // 
  //
  //
  //

  //////////////////////////////////////////////////////////////////	
  //  3. Experiments with NULL pointers and with dereferencing
  //////////////////////////////////////////////////////////////////	
  //   A. Assign NULL to fltPtr1, then print the value of fltPtr1.
  //   B. Accessing the storage locations through the relevant
  //   pointers, assign the following values and print them.
  //       int1  12
  //       int2  22
  //       dub1  10.1
  //       dub2  20.2
  //       flt1  30.3

  // Write your code here:
/*	fltPtr1 = NULL;
	cout << fltPtr1;
  	int1 = 12;
	int2 = 22;
	dub1 = 10.1;
	dub2 = 20.2;
	flt1 = 30.3;
	cout << int1 << " " << int2 << " " << dub1 << " " << dub2 << " " << flt1 << endl;
*/	// Your program should have terminated with a run-time error.
  // What error was reported?
  //
  // a run-time error
  //
  // Why did it occur?
  //
  // 

  //   C.  Fix the problem and repeat.

  // Write your code here:
fltPtr1 = NULL;
        cout << fltPtr1;
        int1 = 12;
        int2 = 22;
        dub1 = 10.1;
        dub2 = 20.2;
        flt1 = 30.3;
        cout << int1 << " " << int2 << " " << dub1 << " " << dub2 << " " << flt1 << endl;


  cout << "-----------------------------------------" << endl << endl;

  //////////////////////////////////////////////////////////////////	
  //  4. Experiments with pointer arithmetic
  //////////////////////////////////////////////////////////////////	
  //    A.  Print the values of intPtr2, (intPtr2+1) and
  //    (intPtr2-1). Did you get what you expected? 

  // Write your code here:
cout << *intPtr2 << " " << (*intPtr2+1) << " " << (*intPtr2-1) << endl;	

  // Write your explanation here:
  // yes i got what i had expected it printed out the values of the variables
  //
  //
  //
  //
  //


  //   B. Print the value of intPtr1.
  //   C. Use the increment operator to increment intPtr1. 
  //   D. Print the value of intPtr1 again.  
  //   E. Print the value of the memory location pointed to by
  //   intPtr1.  Explain what is happening.
	
  // Write your code here:
cout << *intPtr1 << endl;
intPtr1++;
cout << *intPtr1 << endl;
cout << &intPtr1 << endl;

  // Write your explanation here.
  // the increment operator had added 10 to the value of intPtr1 instead of just 1
  //
  //
  //

  cout << "-----------------------------------------" << endl << endl;


  //////////////////////////////////////////////////////////////////	
  //  5. Experiments with dynamic allocation
  //////////////////////////////////////////////////////////////////	
  //   A.  Use the new operator to dynamically allocate an integer.
  //   B.  Assign the number 6000 to the new location.
  //   C.  Print the address of this new location.
  //   D.  Print the value stored in the new location.
  //   E.  Comment on the address of the new location compared to the
  //   addresses seen in part 2.

  //  Write your code here:



  int * num;
  num = new int;
  *num = 6000;
	  cout << &num << endl;
  cout << *num << endl;
  //  Write your results and comments here:
  //  
  //  new location address = 0x7ffc177b14d0
  //  contents of new location = 6000

  //  Comment:this shows dynamic allocation
  //  

  //  F.  Use the new operator to allocate an array of size 10 of
  //  doubles.  Fill the array with 10.0,20.0,...100.0 and print the array.

  // Write your code here:
 double * numlist =  new double[10];
//numlist = {10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0};
  for(int i = 1; i <= 10; i++){
	  numlist[i] = i * 10;
	  cout << numlist[i] << endl;
  }

  return 0;
}
