//========================================================
// Name:     Jacob Bennett
// Due Date: 09/03/2020
//========================================================
#include <iostream>
using namespace std;

//Class
class bankAccount {
    //Private fields for the customers name and balance
    private:
        string customerName;
        int balance;
    //one or more constructors
    //methods to access the name and balance (these methods don't modify the data)
    //and methods to deposit and withdraw an amount (these methods modify data)
    public:
        void displayBal1(); //displays the balance of the account owner
        void displayBal2();
        int deposit();
        int withdrawal();
        void setAccount(string name, int bal); //allows for input of private class
        void printAccount();
        ~bankAccount(); //destructor
        bankAccount();
        bankAccount(string name, int bal);

    };

//Functions
bankAccount::~bankAccount(void) {
    cout << "Deleting object " << customerName << endl;
}
void bankAccount::displayBal1() //deposit some amount and print out name and balance
{
    cout << "Depositing into " << customerName << "'s account..." << endl;
    cout << customerName << " $" << deposit() << endl;
}
void bankAccount::displayBal2() //withdraw some amount and print out name and balance
{
    cout << "Withdrawing from " << customerName << "'s account..." << endl;
    cout << customerName << " $" << withdrawal() << endl;
}
//Set the account data
void bankAccount::setAccount(string name, int bal)
{
    customerName = name;
    balance = bal;
}

//Deposit into account
int bankAccount::deposit()
{
    return balance + 250;
}

//Withdrawal from account
int bankAccount::withdrawal()
{
    return balance - 300;
}
//print out account info
void bankAccount::printAccount()
{
    cout << customerName << " $" << balance << endl;
}

bankAccount::bankAccount()
{
    customerName = "";
    balance = 0;
}

bankAccount::bankAccount(string name, int bal)
{
    customerName = name;
    balance = bal;
}

// main function
int main()
{
    //Create two of these objects account 1 and account 2
    bankAccount accountObj1; // Create account Objects 1
    accountObj1.setAccount("Kim", 2000);

    bankAccount accountObj2; // Create account object 2
    accountObj2.setAccount("Kelly", 1500);

    //Print the original balance for both accounts with the customers name
    accountObj1.printAccount();
    accountObj2.printAccount();

    //deposits some amount in account 1 and prints the final balance with customers name
    accountObj1.displayBal1();
    accountObj1.~bankAccount();

    //withdraws some amount from account 2 and prints the final balance with customers name
    accountObj2.displayBal2();
    accountObj2.~bankAccount();

    //end of program
    return 0;
}
