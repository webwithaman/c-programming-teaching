// // Define a class Rectangle and overload area function for different types of data type.

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
    double length, breadth;

public:
    // // constructors
    Rectangle()
    {
        length = breadth = 0;
    }

    Rectangle(double length, double breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    // // instance member function to set dimensions
    void setDimensions(double length, double breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    // // instance member function to show dimensions
    void showDimensions()
    {
        cout << "\nlength => " << length << ", Breadth => " << breadth;
    }

    // // ooverloaded instance member function to calculate area
    double area() const
    {
        return length * breadth;
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double calculateArea(const Rectangle &rectange) const
    {
        return rectange.area();
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double calculateArea(double length) const
    {
        return length * length;
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double calculateArea(double length, double breadth) const
    {
        return length * breadth;
    }
};

// // Main Function Start
int main()
{
    double l, b, area;

    // // Get length and breadth of a rectangle to find its area
    cout << "\nEnter Length and Breadth of A Rectangle => ";
    cin >> l >> b;

    Rectangle rec1(l, b); // create object of Rectangle

    area = rec1.calculateArea(); // find area

    // // display area of rectangle
    cout << "\nArea of Rectangle => " << area;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
