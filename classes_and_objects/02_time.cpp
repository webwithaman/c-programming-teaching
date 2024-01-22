// // Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Time
class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    void setTime(int)
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
