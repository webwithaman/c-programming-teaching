// // Design a class hierarchy for a banking system with a base class Account and two derived classes SavingsAccount and CurrentAccount. Each class should have data members for account balance, account number, and an interest rate (for savings account). Implement virtual functions for deposit, withdraw, and display account details. Demonstrate the use of these classes by creating objects and performing transactions.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

// // use namespace
using namespace std;

// // define class Mobile
class Car
{
public:
    // // static member variable
    static const int MAX_CHARS_IN_MODEL = 51;

private:
    char *model;

public:
    // // constructors
    Car()
    {
        model = new char[1];
        model[0] = '\0'; // // terminate with null char
        cout << "\nDefault Constructor of Class Car";
    }

    Car(const char *model)
    {
        int length = strlen(model);

        this->model = new char[length > MAX_CHARS_IN_MODEL - 1 ? MAX_CHARS_IN_MODEL : length + 1];

        if (length > MAX_CHARS_IN_MODEL - 1)
        {
            strncpy(this->model, model, MAX_CHARS_IN_MODEL - 1);
            this->model[MAX_CHARS_IN_MODEL - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->model, model);
        }

        cout << "\nParametrized Constructor of Class Car";
    }

    // // instance member function to set model
    void setModel(const char *model)
    {
        int length = strlen(model);

        this->model = new char[length > MAX_CHARS_IN_MODEL - 1 ? MAX_CHARS_IN_MODEL : length + 1];

        if (length > MAX_CHARS_IN_MODEL - 1)
        {
            strncpy(this->model, model, MAX_CHARS_IN_MODEL - 1);
            this->model[MAX_CHARS_IN_MODEL - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->model, model);
        }
    }

    // // instance member function to get model
    const char *getModel() const
    {
        return model;
    }

    // // destructor
    ~Car()
    {
        delete[] model;
    }
};

// // define class SportsCar by Inheriting class Car
class SportsCar : public Car
{
private:
    int sensorCount;

public:
    // // constructors
    SportsCar() : Car()
    {
        sensorCount = 0;
        cout << "\nDefault Constructor of Class Student";
    }

    SportsCar(const char *model, int sensorCount) : Car(model)
    {
        if (sensorCount < 0) // if sensorCount is negative, then make it positive
            sensorCount = -sensorCount;

        this->sensorCount = sensorCount;
        cout << "\nParametrized Constructor of Class SportsCar";
    }

    // // instance member function to set sensorCount
    void setSensorCount(int sensorCount)
    {
        if (sensorCount < 0) // if sensorCount is negative, then make it positive
            sensorCount = -sensorCount;

        this->sensorCount = sensorCount;
    }

    // // instance member function to get sensorCount
    int getSensorCount() const
    {
        return sensorCount;
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
