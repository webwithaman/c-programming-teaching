// // Write a C++ program to calculate the square of a number.

// // Header files
#include <iostream>
#include <conio.h>

// // Add namespace
using namespace std;

// // Main Function Start
int main()
{
    int num, square;

    cout << "\nEnter A Number to Calculate Square => ";
    cin >> num;

    square = num * num;

    cout << "\nSquare of " << num << " => " << square;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
