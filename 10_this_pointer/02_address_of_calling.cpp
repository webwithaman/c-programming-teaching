// // Use this pointer to get the address of calling or current object. define a class A and a member function that returns the address of calling object.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class A
class A
{

public:
    // // instance member function that returns the address of calling or current object
    A *getAddress()
    {
        return this; // this pointer points to the current object
    }
};

// // Main Function Start
int main()
{
    A a1, *ptr;

    // // get address of a1
    ptr = a1.getAddress();

    cout << "\nAddress of Object (a1) => " << ptr;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
