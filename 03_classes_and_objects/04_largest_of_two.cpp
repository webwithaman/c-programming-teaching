// // Define a class LargestNumber which should be able to find largest of 2 or 3 numbers. So, define appropriate instance member functions to do this task.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class LargestOfTwo
class LargestOfTwo
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
    void calculateLargestOfTwo()
    {
        factorial = 1;
        for (int i = 2; i <= num; i++)
            factorial *= i;
    }

    // instance member function to display the factorial
    void displayLargestOfTwo()
    {
        cout << factorial;
    }
};

// // Main Function Start
int main()
{
    LargestOfTwo f1; // create object of LargestOfTwo
    int n;

    // Get a number to calculate factorial
    cout << "\nEnter A Number to Calculate LargestOfTwo => ";
    cin >> n;

    f1.setNumber(n); // set Number to calculate factorial

    f1.calculateLargestOfTwo(); // calculate factorial of n

    cout << "\nLargestOfTwo of " << n << " => ";

    f1.displayLargestOfTwo(); // display factorial of n

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
