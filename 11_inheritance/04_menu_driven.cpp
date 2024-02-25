/*
Write a C++ program to design a base class Person (name, address, phone_no). Derive a class Employee (eno, ename) from Person. Derive a class Manage (designation, department name, basic-salary) from Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary

Output :-

*/

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

// // use namespace
using namespace std;

// // define class Person
class Person
{

public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;
    static const int MAX_CHARS_IN_ADDRESS = 21;
    static const int MAX_DIGITS_IN_NUMBER = 11;

private:
    // // instance member variables
    char *name, *address, *phoneNumber;

public:
    // // instance member function to set name
    void setName(const char *name)
    {
        int length = strlen(name);

        this->name = new char[length > MAX_CHARS_IN_NAME - 1 ? MAX_CHARS_IN_NAME : length + 1];

        strncpy(this->name, name, MAX_CHARS_IN_NAME - 1);

        if (length > MAX_CHARS_IN_NAME)
        {
            this->name[MAX_CHARS_IN_NAME - 1] = 0; // // terminate with null character
        }
    }

    // // instance member function to get name
    const char *getName() const
    {
        return name;
    }

    // // instance member function to set address
    void setAddress(const char *address)
    {
        int length = strlen(address);

        this->address = new char[length > MAX_CHARS_IN_ADDRESS - 1 ? MAX_CHARS_IN_ADDRESS : length + 1];

        strncpy(this->address, address, MAX_CHARS_IN_ADDRESS - 1);

        if (length > MAX_CHARS_IN_ADDRESS)
        {
            this->address[MAX_CHARS_IN_ADDRESS - 1] = 0; // // terminate with null character
        }
    }

    // // instance member function to get address
    const char *getAddress() const
    {
        return address;
    }

    // // instance member function to set phoneNumber
    void setName(const char *name)
    {
        int length = strlen(name);

        this->name = new char[length > MAX_CHARS_IN_NAME - 1 ? MAX_CHARS_IN_NAME : length + 1];

        strncpy(this->name, name, MAX_CHARS_IN_NAME - 1);

        if (length > MAX_CHARS_IN_NAME)
        {
            this->name[MAX_CHARS_IN_NAME - 1] = 0; // // terminate with null character
        }
    }

    // // instance member function to get phoneNumber
    const char *getPhoneNumber() const
    {
        return phoneNumber;
    }
};

// // define class Employee
class Employee : public Person
{
private:
    // // instance member variables
    int empId;
    double salary;

public:
    // // instance member function to set empId
    void setEmpId(int empId)
    {
        this->empId = empId;
    }

    // // instance member function to set salary
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    // // instance member function to get empId
    int getEmpId() const
    {
        return empId;
    }

    // // instance member function to get salary
    double getSalary()
    {
        return salary;
    }
};

// // Main Function Start
int main()
{

    // // create an instance of Employee class
    // Employee e1;

    // // // set details
    // e1.setName("Aman Kumar");
    // e1.setAge(20);
    // e1.setEmpId(01);
    // e1.setSalary(20000000);

    // // // get and display details
    // cout << "\nEmployee Name => " << e1.getName();
    // cout << "\nEmployee Age => " << e1.getAge();
    // cout << "\nEmployee Id => " << e1.getEmpId();
    // cout << "\nEmployee Salary => " << e1.getSalary();

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
