// // C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

// // use namespace
using namespace std;

// // define class A
class A
{
private:
    int a;

public:
    // // constructors
    A()
    {
        cout << "\nDefault Constructor of Class A";
    }

    A(int a)
    {
        this->a = a;
        cout << "\nParametrized Constructor of Class A";
    }

    // // instance member function to get a
    int getA()
    {
        return a;
    }
};

// // define class B by Inheriting class A
class B : public A
{
private:
    int b;

public:
    // // constructors
    B() : A()
    {
        cout << "\nDefault Constructor of Class B";
    }

    B(int b) : A(b)
    {
        this->b = b;
        cout << "\nParametrized Constructor of Class B";
    }

    // // instance member function to get b
    int getB()
    {
        return b;
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
