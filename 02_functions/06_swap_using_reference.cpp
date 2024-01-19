// // Define a function to swap data of two int variables using call by reference.

// // Header files
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

// // Add namespace
using namespace std;

// // Function Declaration (Prototype)
void pascalTriangle(int);
long long unsigned int factorial(int);

// // Main Function Start
int main()
{
    int lines;
    cout << "\nHow Many Lines of Pascal Triangle You Want to Print => ";
    cin >> lines;

    pascalTriangle(lines);

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End

// // Function Definition

// // Function to Print Pascal Triangle Upto N Lines
void pascalTriangle(int maxRows)
{
    cout << "\n-------------------------------------------------------------\n";

    int element;

    for (int row = 0; row < maxRows; row++)
    {

        for (int space = 0; space < maxRows - row - 1; space++)
            cout << "   ";

        for (int col = 0; col <= row; col++)
        {
            element = factorial(row) / (factorial(col) * factorial(row - col));
            cout << setw(3) << element << "   ";
        }

        cout << endl;
    }
}
