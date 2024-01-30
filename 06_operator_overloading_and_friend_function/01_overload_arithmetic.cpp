/*

1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class :-
- a. +
- b. -
- c. *
- d. ==

*/

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Complex
class Complex
{

private:
    // // instance member variables
    double real;
    double imag;

public:
    // // constructors
    Complex()
    {
        real = imag = 0;
    }

    Complex(double r)
    {
        real = imag = r;
    }

    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }

    // // instance member function to set compelx number
    void setData(double r, double i)
    {
        real = r;
        imag = i;
    }

    // // instance member function to display compelx number
    void showData()
    {
        cout << "\n"
             << real << " + " << imag << "i" << endl;
    }
};

// // Main Function Start
int main()
{
    double real, imag;

    // // Get complex number
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    Complex c1(real, imag); // create objects of Complex

    // // display complex number
    cout << "\n>>>>>>>> Complex Number <<<<<<<<<\n";
    c1.showData();

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
