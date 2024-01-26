// // Define a class Rectangle and define an instance member function to find Reverse of a Number using class.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Rectangle
class Rectangle
{

private:
    // // instance member variables
    double length, breadth, area;

public:
    // // instance member function to set length of rectangle
    void setLength(int l)
    {
        length = l;
    }

    // // instance member function to set breadth of rectangle
    void setBreadth(int b)
    {
        breadth = b;
    }

    // // instance member function to set dimensions of rectangle
    void setDimensions(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    // // instance member function to get length of rectangle
    double getLength(int l)
    {
        return length;
    }

    // // instance member function to get breadth of rectangle
    double getBreadth(int b)
    {
        return breadth;
    }

    // // instance member function to calculate area of rectangle
    void calculateArea()
    {
        area = length * breadth;
    }

    // // instance member function to get the area of rectangle
    double getArea()
    {
        return area;
    }
};

// // Main Function Start
int main()
{
    Rectangle rec1; // create object of Rectangle
    double l, b, area;

    // // Get length and breadth of a rectangle to find its area
    cout << "\nEnter Length and Breadth of A Rectangle => ";
    cin >> l >> b;

    rec1.setDimensions(l, b); // set dimensions of rectangle
    rec1.calculateArea();     // find area

    // // Get and display area of rectangle
    area = rec1.getArea();

    cout << "\nArea of Rectangle => " << area;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
