/*

Write a C++ program to convert Primitive type to Complex type.

Example :-

int main()
{
  Complex c1;
  Int x=5;
  c1=x;
  return 0;
}

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
    int real;
    int imag;

public:
    // // constructors
    Complex()
    {
        real = imag = 0;
    }

    Complex(int r)
    {
        real = imag = r;
    }

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // // instance member function to set compelx number
    void setData(int r, int i)
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
    int r;
    cout << "\nEnter A Number to Convert it into Complex Number => ";
    cin >> r;

    // // primitive to complex
    Complex c = r;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number <<<<<<<<<\n";
    c.showData();

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
