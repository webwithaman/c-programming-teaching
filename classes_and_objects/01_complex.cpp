// // Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.

// // Header files
#include <iostream>
#include <conio.h>
#include <math.h>

// // define class Complex
class Complex
{
    float real;
    float imag;

public:
    void setComplex(float r, float i)
    {
        real = r;
        imag = i;
    }

    void printComplex()
    {
        cout << "\n"
             << real << " + " << imag << "i" << endl;
    }
};

// // Main Function Start
int main()
{
}
// // Main Function End
