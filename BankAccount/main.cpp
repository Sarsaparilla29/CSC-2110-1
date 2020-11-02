//========================================================
// Name:     Jacob Bennett
// Due Date: 09/14/2020
//========================================================
#include <iostream>
#include <string>
#include "account.h"
#include <iomanip>
using namespace std;

// can use random starting balance
//Account access


// main function
int main()
{
    //variables for use in setting the customer name and balance
    string userInput = "";
    double amt = 0;
    char a;

    //bank account object created
    bankAccount accountObj[10];

    //start of program
    cout << "---Bank Account Program---" << endl;
    cout << "--------------------------" << endl;

    //Loop for customers name, balance, and interest
    for(int i = 0; i < 10; i++) {
        cout << "Input NAME and Balance where prompted below..." << endl;
        cout << "NAME: ";
        cin >> userInput;
        cout << "BALANCE: ";
        cin >> amt;
        cout << "Would you like to add interest(y/n)?: ";
        cin >> a;
        if (a == 'y'){
            accountObj[i].interest(userInput, amt);
        }
        else {
            accountObj[i].setAccount(userInput, amt);
        }
    }
    cout << endl;

    //Printing account names and balances
    cout << "Account Name's and Balances Below" << endl;
    cout << "---------------------------------" << endl;
    cout << "Name" << setw(10) << right << "Balance" << endl;
    //Print the original balance for both accounts with the customers name
    for(int i = 0; i < 10; i++) {
        accountObj[i].printAccount();
    }

    //deposits some amount in account 1 and prints the final balance with customers name
    /*for(int i = 0; i < 10; i++) {
            if(0 == i%2){
                accountObj[i].displayBal1();
            }
            else {
                accountObj[i].displayBal2();
            }

    }*/


    //withdraws some amount from account 2 and prints the final balance with customers name
    //accountObj[1].displayBal2();

    //end of program
    cout << "End of Program" << endl;
    return 0;
}
