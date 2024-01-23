// // Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class ReverseNumber
class ReverseNumber
{
    // // instance member variables
    int num;
    int revOfNum;

public:
    // // instance member function to set number for which the square will be calculated
    void setNumber(int n)
    {
        num = n;
    }

    // // instance member function to get number for which the square will be calculated
    int getNumber()
    {
        return num;
    }

    // // instance member function to calculate square of num
    void calculateReverseNumber()
    {
        square = num * num;
        countFunctionCalls++;
    }

    // // instance member function to get the square
    long long unsigned int getReverseNumber()
    {
        return square;
    }
};

// define (initialize) static member variable of ReverseNumber class
int ReverseNumber::countFunctionCalls = 0;

// // Main Function Start
int main()
{
    ReverseNumber sqr1; // create object of ReverseNumber
    int n;
    long long unsigned int square;

    // // Get a number to calculate square of it
    cout << "\nEnter A Number to Calculate ReverseNumber => ";
    cin >> n;

    sqr1.setNumber(n);             // set number to calculate square
    sqr1.calculateReverseNumber(); // calculate square

    // // Get and display square
    square = sqr1.getReverseNumber();

    cout << "\nReverseNumber of " << n << " => " << square;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
