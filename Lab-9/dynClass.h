#ifndef DYNCLASS_H
#define DYNCLASS_H
#include <iostream>
using namespace std;

template <class T>

class dynClass
{

   public:
         // constructor
         dynClass(int m1, int m2);
         // copy constructor
         dynClass(const dynClass& obj);
         // destructor
         ~dynClass();
         // assignment operator
         dynClass& operator= (const dynClass& obj);

   private:
         // data of int and a pointer to data of int
         int member1;
         int *member2;
};
// use constructor initialization list to give member1 the
// value m1 and allocate dynamic memory associated with member2
// and initialize it to with the value m2

template <class T>
dynClass<T>::dynClass(int m1, int m2)
{
    cout << "Constructor " << " " << m1 << " " << m2 << endl;
    member1 = m1;
    member2 = new int(m2);
}

// initialize new object to have the
// same data as obj. use constructor initialization
// list to give member1 the value member1 of obj and
// allocate dynamic memory associated with member2 and
// initialize it with the value pointed by member2 of obj.
template <class T>
dynClass<T>::dynClass(const dynClass &obj)
{
    member1 = obj.member1;
    member2 = new int(*obj.member2);
    cout << "Copy Constructor " << " " << obj.member1 << " " << *obj.member2 << endl;
}

// destructor. deallocates the dynamic memory allocated
// by the constructor and display “Destructor is called
//
template <class T>
dynClass<T>::~dynClass()
{
    cout << "Destructor " << " " << member1 << " " << *member2 << endl;
    delete member2;
}

// overloaded assignment operator=. returns a reference to
// current object.
// copy static data member from obj to the current object
// contents of dynamic memory must be same as that of obj
template <class T>
dynClass<T> &dynClass<T>::operator=(const dynClass &obj)
{
    member1 = obj.member1;
    *member2 = *obj.member2;
    cout << "Assignment Operator " << " " << member1 << " " << *member2 << endl;
    return *this;
}

#endif
