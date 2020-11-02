#pragma once
using namespace std;

class bankAccount {
    //Private fields for the customers name and balance
    private:
        string customerName;
        double balance;
    //one or more constructors
    //methods to access the name and balance (these methods don't modify the data)
    //and methods to deposit and withdraw an amount (these methods modify data)
    public:
        /*void displayBal1(); //displays the balance of the account owner
        void displayBal2();
        int deposit();
        int withdrawal();*/
        void interest(string name, double bal); //used to calculate interest
        void setAccount(string name, double bal); //allows for input of private class
        void printAccount();
        ~bankAccount(); //destructor
        bankAccount();
        bankAccount(string name, double bal);

    };
