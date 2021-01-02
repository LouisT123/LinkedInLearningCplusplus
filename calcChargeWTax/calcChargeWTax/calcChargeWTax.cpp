#include <cstdlib>
#include <iomanip> //setprecison
#include <iostream>

using namespace std;

const float TAX_RATE = .04;

int main()
{
	//declare var
	string name;
	float price = 4.50;
	int qty = 0;
	float charge = 0, taxCharge = 0;

	cout << "base price for a single unit is $4.50" << endl;

	//get input from user
	cout << "Enter the number you wish to order" << endl;
	cin >> qty;

	//format output
	cout.setf(ios::fixed); //allows data to not be shown in e-notation
	cout.setf(ios::showpoint); //will make decimal place be shown even if its not necessary

	//calculations
	charge = price * qty;
	taxCharge = charge * TAX_RATE;

	cout << "Tax charged is: $ " << setprecision(2) << taxCharge << endl; //set precision says give 2 places after the decimal point even if they are not needed
	charge += taxCharge;

	//formatted output 
	cout << "Your total charge: $ " << setprecision(2) << charge << endl;


}