// random number generator exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> //used for math functions such as ceil, floor, squared, square root, and abs and fabs
#include <ctime> //used for srand(time(0))
#include <cstdlib> // used for srand
using namespace std;

int main()
{
    //static_cast will convert/force the result to the specified datatype
    int numEggs = 3;
    cout << "numEggs = 3" << endl;
   /* cout << "after static_cast<float>(numEggs * 1.5)" << endl;*/
    /*cout << static_cast<float>(numEggs * 1.5) << endl;*/
    //this line will cout the answer "4.5"
    cout << "after static_cast<int>(numEggs * 1.5)" << endl;
    cout << static_cast<int>(numEggs * 1.5) << endl;
    //this will cout the answer "4"
    //this method to force convert into an integer allows for the answer to not be half an egg

    //any decimal number and integer will defualt answer to double

    //utilizing ceil and floor to round
    cout << "testing ceil and floor" << endl;
    float taxRate = 4.999;
    
    int taxRateRoundedUp = ceil(taxRate);
    cout << "rounding up 4.999 with ceil(4.999) is " << taxRateRoundedUp << endl;
    //cout is 5
    int taxRateRoundedDown = floor(taxRate);
    cout << "rounding down 4.999 with floor(4.999) is " << taxRateRoundedDown << endl;
    //cout is 4

    cout << "testing mod operator (%)" << endl;
    //mod operator (%) to find remainder
    int remainder = 6 % 4;
    cout << "the remainder of 6/4 is: " << remainder << endl;
    
    //other useful math libararies include squared (ie  r^2 is pow (r,2)), 
    //square root (ie sqrt (4.0)), abs = int absolute value, and fabs = floating abs

    //rng 
    //seeding a random number using srand(time(0)) will cause starting point of rand to be number of seeconds since "beginning of time"
    cout << "seed rng with srand(time(0))" << endl;
    srand(time(0));
    cout << "dice = (rand() %6) + 1;  will generate a random number between 1 and 6 " << endl;
    //add 1 to generatedNumber to get a number between 1 and 6
    int dice;
    dice = (rand() % 6) + 1;
    cout << "you rolled: " << dice << endl;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
