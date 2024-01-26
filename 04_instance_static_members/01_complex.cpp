/*

Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts. Also define following member functions :-

- a. void setData(int,int)
- b. void showData()
- c. Complex add(Complex)

*/

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Complex
class Complex
{
    // // instance member variables
    double a;
    double b;

public:
    // // instance member function to set compelx number
    void setData(double r, double i)
    {
        a = r;
        b = i;
    }

    // // instance member function to display compelx number
    void showData()
    {
        cout << "\n"
             << a << " + " << b << "i" << endl;
    }

    // // instance member function to add two complex numbers
    Complex add(Complex C)
    {
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;
    }
};

// // Main Function Start
int main()
{
    Complex c1, c2, c3; // create objects of Complex
    double real, imag;

    // // Get complex numbers  to add
    cout << "\n>>>>>>>> Enter Two Complex Numbers to Add <<<<<<<<<\n";

    // // Get first complex number
    cout << "\n>>>>>>>> Enter First Complex Number <<<<<<<<<\n";
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    c1.setData(real, imag); // set complex number

    // // Get second complex number
    cout << "\n\n>>>>>>>> Enter Second Complex Number <<<<<<<<<\n";
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    c2.setData(real, imag); // set complex number

    // // display first complex number
    cout << "\n>>>>>>>> First Complex Number <<<<<<<<<\n";
    c1.showData();

    // // display second complex number
    cout << "\n>>>>>>>> Second Complex Number <<<<<<<<<\n";
    c2.showData();

    // // add complex numbers
    c3 = c1.add(c2);

    cout << "\n>>>>>>>> Sum of Entered Complex Numbers <<<<<<<<<\n";
    c3.showData(); // display sum

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
