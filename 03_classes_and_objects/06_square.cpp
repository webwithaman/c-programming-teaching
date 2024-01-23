// // Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Square
class Square
{
    // // instance member variables
    int num;
    long long unsigned int square;

public:
    // static member variable to count number of times the calculateSquare function is called
    static int countFunctionCalls;

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
    void calculateSquare()
    {
        square = num * num;
        countFunctionCalls++;
    }

    // // instance member function to get the square
    long long unsigned int getSquare()
    {
        return square;
    }
};

// define (initialize) static member variable of Square class
int Square::countFunctionCalls = 0;

// // Main Function Start
int main()
{
    Square sqr1; // create object of Square
    int n;
    long long unsigned int square;

    // // Get a number to calculate square of it
    cout << "\nEnter A Number to Calculate Square => ";
    cin >> n;

    sqr1.setNumber(n);      // set number to calculate square
    sqr1.calculateSquare(); // calculate square

    // // Get and display square
    square = sqr1.getSquare();

    cout << "\nSquare of " << n << " => " << square;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
