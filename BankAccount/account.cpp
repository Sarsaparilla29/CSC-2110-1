#include <iostream>
#include <iomanip>
#include <string>
#include "account.h"
using namespace std;

bankAccount::~bankAccount(void) { //Destructor
    cout << "Account " << customerName << " object is being deleted...\n" << endl;
}

void bankAccount::interest(string name, double bal){
    double percent;
    cout << fixed << setprecision(2);
    cout << "How much interest: ";
    cin >> percent;
    cout << "Interest: " << percent << "%" << endl;
    percent = (percent/100) + 1;
    double newBalance = bal * percent;
    cout << "Balance with Interest: " << newBalance << endl;
    balance = newBalance;
    customerName = name;
}
/*void bankAccount::displayBal1() //deposit some amount and print out name and balance
{
    cout << "Depositing into " << customerName << "'s account..." << endl;
    cout << customerName << " $" << deposit() << endl;
    cout << endl;
}
void bankAccount::displayBal2() //withdraw some amount and print out name and balance
{
    cout << "Withdrawing from " << customerName << "'s account..." << endl;
    cout << customerName << " $" << withdrawal() << endl;
    cout << endl;
}*/
//Set the account data
void bankAccount::setAccount(string name, double bal)
{
    customerName = name;
    balance = bal;
}

//Deposit into account
/*int bankAccount::deposit()
{
    return balance + 250;
}

//Withdrawal from account
int bankAccount::withdrawal()
{
    return balance - 100;
}*/
//print out account info
void bankAccount::printAccount(){
        cout << customerName << " $" << balance << endl;
}

bankAccount::bankAccount()
{
    customerName = "";
    balance = 0;
}

bankAccount::bankAccount(string name, double bal)
{
    customerName = name;
    balance = bal;
}
