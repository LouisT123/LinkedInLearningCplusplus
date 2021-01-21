// pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //integer
    int v1 = 0;
    //pointer (* indicates pointer)
    int* p1;
    //pointer points to reference of v1
    p1 = &v1;
    //changing value that p1 is pointing too is equal 42, also changes v1 since pointer is pointing to v1
    *p1 = 42;
    //prints same value b/c p1 pointing to the exact same thing that v1 is referencing  (v1 referencing the data, p1 pointing to the data)  (p1 is basically referencing the place where v1 is storing)
    cout << v1 << " and pointer is " << *p1 << endl;
    //printing p1 instead of *p1 will show the adress
}

