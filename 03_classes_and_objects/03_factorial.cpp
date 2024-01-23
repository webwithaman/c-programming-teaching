// // Define a class Factorial and define an instance member function to find the Factorial of a number using class.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Factorial
class Factorial
{
    // // instance member variable
    int num;
    long long unsigned int factorial;

public:
    // // instance member function to set number for which the factorial will be calculated
    void setNumber(int n)
    {
        num = n;
    }

    // // instance member function to get number for which the factorial will be calculated
    int getNumber()
    {
        return num;
    }

    // // instance member function to calculate factorial of num
    void calculateFactorial()
    {
        factorial = 1;
        for (int i = 2; i <= num; i++)
            factorial *= i;
    }

    // // instance member function to get the factorial
    long long unsigned int getFactorial()
    {
        return factorial;
    }
};

// // Main Function Start
int main()
{
    Factorial f1; // create object of Factorial
    int n;
    long long unsigned int fact;

    // // Get a number to calculate factorial
    cout << "\nEnter A Number to Calculate Factorial => ";
    cin >> n;

    f1.setNumber(n); // set Number to calculate factorial

    f1.calculateFactorial(); // calculate factorial of n

    fact = f1.getFactorial(); // get factorial

    cout << "\nFactorial of " << n << " => " << fact;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
