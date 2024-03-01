// // Design a class hierarchy for a banking system with a base class Account and two derived classes SavingsAccount and CurrentAccount. Each class should have data members for account balance, account number, and an interest rate (for savings account). Implement pure virtual functions for deposit, withdraw, and display account details in Account class. Demonstrate the use of these classes by creating objects and performing transactions.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

// // use namespace
using namespace std;

// // define class Account
class Account
{
public:
    // // static member variable
    static const int MAX_DIGITS_IN_ACCOUNT_NUM = 6;

protected:
    // // instance member variables
    char *accountNumber;
    double accountBalance;

public:
    // // pure virtual functions to be overridden by derived classes
    virtual void deposit(double) = 0;
    virtual void withdraw(double) = 0;
    virtual void displayAccountDetails() const = 0;
};

// // define class SavingAccount by inheriting an abstract class Account
class SavingAccount : public Account
{
private:
    // // static member variable
    static float rateOfInterest;

public:
    // // override base class deposit function
    void deposit(double amount)
    {
        // // invalid amount
        if (amount < 0)
        {
            cout << "\n!!! Given Amount is Invalid...";
            return;
        }

        // // add amount in accountBalance
        accountBalance += amount;
        cout << "\nMoney Deposited Successfully";
    }

    // // override base class withdraw function
    void deposit(double amount)
    {
        // // invalid amount
        if (amount < 0)
        {
            cout << "\n!!! Given Amount is Invalid...";
            return;
        }
        else if (accountBalance < amount) // // Insufficient Balance
        {
            cout << "\n!!! Insufficient Balance...";
            return;
        }

        // // add amount in accountBalance
        accountBalance -= amount;
        cout << "\nMoney Has Withdrawal Successfully";
    }

    // // override base class displayAccountDetails function
    void displayAccountDetails()
    {
        cout << "\nAccount Number => " << accountNumber;
        cout << "\nAccount Balance => " << accountBalance;
    }

    // // static member function to set rate of interest
    void setRateOfInterest(float roi)
    {
        rateOfInterest = roi;
    }

    // // static member function to get rate of interest
    float getRateOfInterest()
    {
        return rateOfInterest;
    }
};

// // Main Function Start
int main()
{

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
