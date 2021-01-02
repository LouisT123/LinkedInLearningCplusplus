#include <iostream> 

using namespace std;

void printHBD();
int printHBD(string);
int main()
{
	int myAge;
	printHBD();
	printHBD();
	cout << "Happy Birthday dear user\n";
	cout << printHBD("Eren") << endl;
	myAge = printHBD("Erin");
}

void printHBD()
{
	cout << "Happy Birthday to you\n";
}
int printHBD(string name)
{
	int age;
	cout << "Happy Birthday " << name << endl;
	cout << "enter your age" << endl;
	cin >> age;
	return age;


}

//yes this prints wierdly this is intentional 