// ClassExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;
public:
    BankAccount(); //default constructor
    void Deposit(float);
    void WithDrawl(float);
    float getBalance();
};
//defining constructor (when bank account instance is made) (no parameters required so ())
BankAccount::BankAccount()
{
    balance = 0;

}
void BankAccount::Deposit(float dep)
{
    balance += dep;
}
void BankAccount::WithDrawl(float draw)
{
    balance -= draw;
}
float BankAccount::getBalance()
{
    return balance;
}

int main()
{
    BankAccount checking;
    BankAccount savings;

    cout << "Checking balance is: " << checking.getBalance() << endl;
    cout << "Savings balance is: " << savings.getBalance() << endl;

    checking.Deposit(100);
    savings.Deposit(500);

    cout << "Checking balance is now: " << checking.getBalance() << endl;
    cout << "Savings balance is now: " << savings.getBalance() << endl;

    checking.WithDrawl(50);
    savings.WithDrawl(400);

    cout << "Checking balance is now: " << checking.getBalance() << endl;
    cout << "Savings balance is now: " << savings.getBalance() << endl;

}

