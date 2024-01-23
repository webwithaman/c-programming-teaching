// // Define a class Factorial and define an instance member function to find the Factorial of a number using class.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Factorial
class Factorial
{
    // instance member variable
    int num;
    long long unsigned int factorial;

public:
    // instance member function to set number for which the factorial will be calculated
    void setNumber(int n)
    {
        num = n;
    }

    // instance member function to display number for which the factorial will be calculated
    void displayNumber()
    {
        cout << num;
    }

    // instance member function to calculate factorial of num
    void calculateFactorial()
    {
        factorial = 1;
        for (int i = 2; i <= num; i++)
            factorial *= i;
    }

    // instance member function to display the factorial
    void displayFactorial()
    {
        cout << factorial;
    }
};

// // Main Function Start
int main()
{
    Factorial f1; // create object of Factorial
    int n;

    // Get a number to calculate factorial
    cout << "\nEnter A Number to Calculate Factorial => ";
    cin >> n;

    f1.setNumber(n); // set Number to calculate factorial

    f1.calculateFactorial(); // calculate factorial of n

    cout << "\nFactorial of " << n << " => ";

    f1.displayFactorial(); // display factorial of n

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
