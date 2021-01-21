// structExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct students
{
    string name;
    float GPA;
};

int main()
{
    //makes a "student"
    students Teacher;
    Teacher.name = "Dr. Taing";
    //array of students, each student has name and gpa
    students firstPeriod[10];
    firstPeriod[0].name = "Tom";
    firstPeriod[0].GPA = 4.0;
    firstPeriod[1].name = "Phil";
    
    cout << firstPeriod[1].name << endl;
}

