// Dice program (switch statements).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
    int dice = 0;

    //seed the random number generator
    srand(time(0));

    //dice = 7; nah just this line will show invalid
    dice = (rand() % 6) + 1;
    cout << "You rolled a " << dice << endl;

    switch (dice)
    {
        case 1: //if (dice == 1)
            cout << "one " << endl;
            break;
        case 2: //if (dice == 2)
            cout << "two " << endl;
            break;
        case 3: //if (dice == 3)
            cout << "three " << endl;
            break;
        case 4: //if (dice == 4)
            cout << "four " << endl;
            break;
        case 5: //if (dice == 5)
            cout << "five " << endl;
            break;
        case 6: //if (dice == 6)
            cout << "six " << endl;
            break;
        default:
            cout << "Invalid " << endl;
            break;

    }














}
