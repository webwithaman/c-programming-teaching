// // Write a C++ program to calculate the area of a circle.

// // Header files
#include <iostream>
#include <conio.h>

// // Add namespace
using namespace std;

// // Main Function Start
int main()
{
    float radius, area;

    cout << "\nEnter Radius of Circle => ";
    cin >> radius;

    // // calculate area of circle
    area = 22.0 / 7 * radius * radius;

    cout << "\nArea of Circle Having Radius " << radius << " is " << area;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End