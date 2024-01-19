// // Define overloaded functions to calculate area of circle, area of rectangle.

// // Header files
#include <iostream>
#include <conio.h>
#include <math.h>

// // Add namespace
using namespace std;

// // Function Declaration (Prototype)
float area(float);
float area(float, float);

// // Main Function Start
int main()
{
    float l, b, radius;

    cout << "\nEnter Length and Breadth of Rectangle to Find Area => ";
    cin >> l >> b;

    cout << "\nArea of Rectangle => " << area(l, b);

    cout << "\n\nEnter Radius of Circle to Find Area => ";
    cin >> radius;

    cout << "\nArea of Circle => " << area(radius);

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End

// // Function Definition

// // Overloaded Function to Find Area of Rectangle
float area(float l, float b)
{
    return l * b;
}

// // Overloaded Function to Find Area of Circle
float area(float radius)
{
    return 22.0 / 7 * radius * radius;
}
