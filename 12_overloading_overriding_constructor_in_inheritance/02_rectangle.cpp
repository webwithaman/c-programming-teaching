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
    double calculateArea(double length) const
    {
        return length * length;
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double calculateArea(double length, double breadth) const
    {
        return length * breadth;
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double calculateArea(const Rectangle &rectange) const
    {
        return rectange.area();
    }
};

// // Main Function Start
int main()
{
    double length, breadth, area;

    // // Get length and breadth of a rectangle to find its area
    cout << "\nEnter Length and Breadth of A Rectangle => ";
    cin >> length >> breadth;

    // // create object of Rectangle
    Rectangle rect1(length, breadth);

    // // find area
    area = rect1.area();

    // // display area of 
    cout << "\nArea of Rectangle => " << area;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
