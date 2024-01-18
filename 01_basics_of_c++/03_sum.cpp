// // Write a C++ program to calculate the sum of two numbers.

// // Header files
#include <iostream>
#include <conio.h>

// // Add namespace
using namespace std;

// // Main Function Start
int main()
{
    int num1, num2, sum;

    cout << "\nEnter Two Numbers to Add => ";
    cin >> num1 >> num2;

    sum = num1 + num2;

    cout << "\nSum of " << num1 << " and " << num2 << " => " << sum;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End