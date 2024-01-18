// // Write a C++ program to calculate average of 3 numbers.

// // Header files
#include <iostream>
#include <conio.h>

// // Add namespace
using namespace std;

// // Main Function Start
int main()
{
    float l, b, h, vol;

    cout << "\nEnter Length, Breadth and Height of Cuboid to Find Volume => ";
    cin >> l >> b >> h;

    // // calculate volume
    vol = l * b * h;

    cout << "\nVolume of Cuboid => " << vol;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
