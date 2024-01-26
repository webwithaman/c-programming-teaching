// // Define a class Circle and define an instance member function to find Reverse of a Number using class.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Circle
class Circle
{

private:
    // // instance member variables
    double radius, area;

public:
    // // instance member function to set radius of circle
    void setRadius(int r)
    {
        radius = r;
    }

    // // instance member function to get radius of circle
    double getRadius(int l)
    {
        return radius;
    }

    // // instance member function to calculate area of circle
    void calculateArea()
    {
        area = 22.0 / 7 * radius * radius;
    }

    // // instance member function to get the area of circle
    double getArea()
    {
        return area;
    }
};

// // Main Function Start
int main()
{
    Circle cir1; // create object of Circle
    double rad, area;

    // // Get radius of a circle to find its area
    cout << "\nEnter Radius of A Circle => ";
    cin >> rad;

    cir1.setRadius(rad);  // set radius of circle
    cir1.calculateArea(); // find area

    // // Get and display area of circle
    area = cir1.getArea();

    cout << "\nArea of Circle => " << area;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
