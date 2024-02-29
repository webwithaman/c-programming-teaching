// // C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.

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

private:
    char *name;

public:
    // // constructors
    Person()
    {
        name = new char[1];
        name[0] = '\0'; // // terminate with null char
        cout << "\nDefault Constructor of Class Person";
    }

    Person(const char *name)
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

        cout << "\nParametrized Constructor of Class Person";
    }

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

    // // destructor
    ~Person()
    {
        delete[] name;
    }
};

// // define class Student by Inheriting class Person
class Student : public Person
{
private:
    int roll;

public:
    // // constructors
    Student() : Person()
    {
        roll = -1;
        cout << "\nDefault Constructor of Class Student";
    }

    Student(const char *name, int roll) : Person(name)
    {
        if (roll < 0) // if roll is negative, then make it positive
            roll = -roll;

        this->roll = roll;
        cout << "\nParametrized Constructor of Class Student";
    }

    // // instance member function to set roll
    void setRoll(int roll)
    {
        if (roll < 0) // if roll is negative, then make it positive
            roll = -roll;

        this->roll = roll;
    }

    // // instance member function to get roll
    int setRoll() const
    {
        return roll;
    }
};

// // Main Function Start
int main()
{
    // // instance of B
    B b1, b2 = 6;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
