// Pass by reference with (happy birthday) functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//function prototype
void printHBD();
void printHBD(string, int&);

int main()
{
    int myAge;
    printHBD();
    printHBD();
    cout << "Happy birthday dear user" << endl;

    cout << "\nEnter your age \n";
    cin >> myAge;
    cout << "(before pass by ref) My age is: " << myAge << endl;
    printHBD("Louis", myAge);
    cout << "(After pass by ref) My age is: " << myAge << endl;
}

void printHBD()
{
    cout << "Happy birthday to you" << endl;
}

void printHBD(string name, int& age)
{
    cout << "Happy birthday " << name << endl;

    age += 10;
}

//Note that arrays by default are passed by reference