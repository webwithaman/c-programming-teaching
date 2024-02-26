// // Write a C++ program to demonstrate how a common friend function can be used to exchange the private values of two classes. (Use call by reference method).

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class A
class A
{
public:
    int a = 10;

    virtual int print()
    {
        cout << "\nA ";
    }
};

// // define class B
class B : public A
{
public:
    int a = 20;

    int print()
    {
        cout << "\nB";
    }
};

// // Main Function Start
int main()
{

    A *ptr;
    B objB;

    ptr = &objB;

    cout << ptr->a;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
