// // Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Complex
class Complex
{
    // instance member variables
    float real;
    float imag;

public:
    // instance member function to set compelx number
    void setComplex(float r, float i)
    {
        real = r;
        imag = i;
    }

    // instance member function to print compelx number
    void printComplex()
    {
        cout << "\n"
             << real << " + " << imag << "i" << endl;
    }
};

// // Main Function Start
int main()
{
    Complex c1; // create object of Complex
    float real, imag;

    // Get Complex number
    cout << "\n>>>>>>>> Enter A Complex Number <<<<<<<<<\n";
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    c1.setComplex(real, imag); // set complex number

    cout << "\n>>>>>>>> Entered Complex Number <<<<<<<<<";
    c1.printComplex(); // print complex number

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
