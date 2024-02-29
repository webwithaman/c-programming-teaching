// // Create a class Float that contains one float data member. Overload (+,-,/) arithmetic operators so that they can operate on the objects of FLOAT.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Float
class Float
{

private:
    // // instance member variables
    float data;

public:
    // // constructors
    Float() {}

    Float(float data)
    {
        this->data = data;
    }

    // // instance member function to set data
    void setData(float data)
    {
        this->data = data;
    }

    // // instance member function to get data
    float getData()
    {
        return data;
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
