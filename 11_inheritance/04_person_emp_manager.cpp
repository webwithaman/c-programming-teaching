// // Write a C++ program to design a base class Person (name, address, phoneNumber). Derive a class Employee (empId) from Person. Derive a class Manager (designation, departmentName, basicSalary) from Employee. Now, Accept all details of 'n' managers and display manager having highest salary.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

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

        if (length > MAX_CHARS_IN_NAME - 1)
        {
            strncpy(this->name, name, MAX_CHARS_IN_NAME - 1);
            this->name[MAX_CHARS_IN_NAME - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->name, name);
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

        if (length > MAX_CHARS_IN_ADDRESS - 1)
        {
            strncpy(this->address, address, MAX_CHARS_IN_ADDRESS - 1);
            this->address[MAX_CHARS_IN_ADDRESS - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->address, address);
        }
    }

    // // instance member function to get address
    const char *getAddress() const
    {
        return address;
    }

    // // instance member function to set phoneNumber
    void setPhoneNumber(const char *phoneNumber)
    {

        this->phoneNumber = new char[MAX_DIGITS_IN_NUMBER];

        if (strlen(phoneNumber) > MAX_DIGITS_IN_NUMBER - 1)
        {
            strncpy(this->phoneNumber, phoneNumber, MAX_DIGITS_IN_NUMBER - 1);

            this->phoneNumber[MAX_DIGITS_IN_NUMBER - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->phoneNumber, phoneNumber);
        }
    }

    // // instance member function to get phoneNumber
    const char *getPhoneNumber() const
    {
        return phoneNumber;
    }

    // // destructor
    ~Person()
    {
        delete[] name;
        delete[] address;
        delete[] phoneNumber;
    }
};

// // define class Employee
class Employee : public Person
{
private:
    // // instance member variables
    int empId;

public:
    // // instance member function to set empId
    void setEmpId(int empId)
    {
        this->empId = empId;
    }

    // // instance member function to get empId
    int getEmpId() const
    {
        return empId;
    }
};

// // define class Manager
class Manager : public Employee
{
public:
    // // static member variable
    static const int MAX_CHARS_IN_DESIGNATION = 51;
    static const int MAX_CHARS_IN_DEPARTMENT_NAME = 51;

private:
    // // instance member variables
    char *designation, *departmentName;
    double basicSalary;

public:
    // // instance member function to set designation
    void setDesignation(const char *designation)
    {
        int length = strlen(designation);

        this->designation = new char[length > MAX_CHARS_IN_DESIGNATION - 1 ? MAX_CHARS_IN_DESIGNATION : length + 1];

        if (length > MAX_CHARS_IN_DESIGNATION - 1)
        {
            strncpy(this->designation, designation, MAX_CHARS_IN_DESIGNATION - 1);
            this->designation[MAX_CHARS_IN_DESIGNATION - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->designation, designation);
        }
    }

    // // instance member function to get designation
    const char *getDesignation() const
    {
        return designation;
    }

    // // instance member function to set departmentName
    void setDepartmentName(const char *departmentName)
    {
        int length = strlen(departmentName);

        this->departmentName = new char[length > MAX_CHARS_IN_DEPARTMENT_NAME - 1 ? MAX_CHARS_IN_DEPARTMENT_NAME : length + 1];

        if (length > MAX_CHARS_IN_DEPARTMENT_NAME - 1)
        {
            strncpy(this->departmentName, departmentName, MAX_CHARS_IN_DEPARTMENT_NAME - 1);

            this->departmentName[MAX_CHARS_IN_DEPARTMENT_NAME - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->departmentName, departmentName);
        }
    }

    // // instance member function to get departmentName
    const char *getDepartmentName() const
    {
        return departmentName;
    }

    // // instance member function to set basicSalary
    void setBasicSalary(double basicSalary)
    {
        this->basicSalary = basicSalary;
    }

    // // instance member function to get basicSalary
    double getBasicSalary() const
    {
        return basicSalary;
    }

    // // destructor
    ~Manager()
    {
        delete[] designation;
        delete[] departmentName;
    }

    // // friend function to find manager with the highest salary
    friend int highestSalary(Manager[], int);
};

// // friend function to find manager with the highest salary
int highestSalary(Manager managers[], int size)
{
    int highestIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (managers[i].basicSalary > managers[highestIndex].basicSalary)
            highestIndex = i;
    }

    return highestIndex;
}

// // Main Function Start
int main()
{
    int n;
    cout << "\nHow Many Managers Details You Want to Enter => ";
    cin >> n;

    // // invalid input
    if (n < 1)
    {
        cout << "\n!!! Invalid Input...";
        exit(0);
    }

    // // create an array of instances of Manager
    Manager managers[n];
    char name[Manager::MAX_CHARS_IN_NAME], address[Manager::MAX_CHARS_IN_ADDRESS], phoneNumber[Manager::MAX_DIGITS_IN_NUMBER], designation[Manager::MAX_CHARS_IN_DESIGNATION], departmentName[Manager::MAX_CHARS_IN_DEPARTMENT_NAME];
    int empId;
    double basicSalary;

    cout << "\n>>>>>>>>> Enter Details of " << n << " Managers <<<<<<<<<<<\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>> Enter Details of Manager-" << i + 1 << " <<<<<<<<<<\n";

        cout << "\nEnter Employee Id => ";
        cin >> empId;

        cout << "\nEnter Name (MAX_CHARS " << Manager::MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, Manager::MAX_CHARS_IN_NAME);

        cout << "\nEnter Address (MAX_CHARS " << Manager::MAX_CHARS_IN_ADDRESS - 1 << ") => ";
        cin.getline(address, Manager::MAX_CHARS_IN_ADDRESS);

        cout << "\nEnter Phone Number (MAX_CHARS " << Manager::MAX_DIGITS_IN_NUMBER - 1 << ") => ";
        cin.getline(phoneNumber, Manager::MAX_CHARS_IN_ADDRESS);

        cout << "\nEnter Designation (MAX_CHARS " << Manager::MAX_CHARS_IN_DESIGNATION - 1 << ") => ";
        cin.getline(designation, Manager::MAX_CHARS_IN_DESIGNATION);

        cout << "\nEnter Department Name (MAX_CHARS " << Manager::MAX_CHARS_IN_DEPARTMENT_NAME - 1 << ") => ";
        cin.getline(departmentName, Manager::MAX_CHARS_IN_DEPARTMENT_NAME);

        cout << "\nEnter Basic Salary => ";
        cin >> basicSalary;

        managers[i].setEmpId(empId);
        managers[i].setName(name);
        managers[i].setPhoneNumber(phoneNumber);
        managers[i].setAddress(address);
        managers[i].setDesignation(designation);
        managers[i].setDepartmentName(departmentName);
        managers[i].setBasicSalary(basicSalary);
    }

    cout << "\n>>>>>>>>> Details of " << n << " Managers <<<<<<<<<<<\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>> Details of Manager-" << i + 1 << " <<<<<<<<<<";
        cout << "\nEmployee Id => " << managers[i].getEmpId();
        cout << "\nName => " << managers[i].getName();
        cout << "\nPhone Number => " << managers[i].getPhoneNumber();
        cout << "\nAddress => " << managers[i].getAddress();
        cout << "\nDesignation => " << managers[i].getDesignation();
        cout << "\nDepartment Name => " << managers[i].getDepartmentName();
        cout << "\nBasic Salary => " << managers[i].getBasicSalary();
    }

    int highestIndex = highestSalary(managers, n);

    cout << "\n\nManager with the Highest Salary => " << managers[highestIndex].getBasicSalary();
    cout << "\nManager Name => " << managers[highestIndex].getName();

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
