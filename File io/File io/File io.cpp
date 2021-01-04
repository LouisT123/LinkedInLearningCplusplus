// File io.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include <fstream>  //filestream: reading inputs from files and writing to files


int main()
{
    //file reader
    ifstream inStream;
    inStream.open("passphrase.txt");
    ofstream outStream;
    outStream.open("NewPassPhrase.txt", ios::app); //ios::app to append data not override
    
    int userGuess = 0;

    string passPhrase;

    if (!inStream.fail()) //if file successfully opens it will read in and print out
    {
        while (inStream >> passPhrase) //while stuff to read
        {
            cout << "The past phrase is: " << passPhrase << endl;
            cout << "What is your answer?" << endl;
            cin >> userGuess;
            if (userGuess == passPhrase.length())
            {
                cout << "Nice you figured it out" << endl;
            }
            else
            {
                cout << "WRONG, better luck next time" << endl;
                outStream << passPhrase << endl; //if wrong answer print wrong words 
            }

        }
    }
    //close files when done
    inStream.close();
    outStream.close();
}

