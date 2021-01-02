// Hoursinaday.cpp (nested for loops example): This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    for (int h = 0; h < 24; h++) //prints hours in a day
    {
        for (int m = 0; m < 60; m++) //prints minutes in a day
        {
            for (int s = 0; s < 60; s++) //prints hours in a day
            {
                cout << h << ":" << m << ":" << s << endl;
            }
        }
           
    }

}

