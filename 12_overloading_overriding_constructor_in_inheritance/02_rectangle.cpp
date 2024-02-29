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

    Rectangle(double length)
    {
        this->length = length;
        this->breadth = length;
    }

    Rectangle(double length, double breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    // // instance member function to set dimensions
    void setDimensions(double length)
    {
        this->length = length;
        this->breadth = length;
    }

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
    double area(double length) const
    {
        return length * length;
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double area(double length, double breadth) const
    {
        return length * breadth;
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double area(const Rectangle &rectange) const
    {
        return rectange.area();
    }
};

// // Main Function Start
int main()
{
    double area;

    // // create object of Rectangle
    Rectangle rect1(4.5, 8);

    // // find area of rect1
    area = rect1.area();

    // // display area of rect1
    cout << "\nArea of Rectangle Having Dimensions 4.5 and 8 => " << area;

    // // find area of rect2
    area = rect1.area(5, 9);

    cout << "\nArea of Rectangle Having Dimensions 5 and 9 => " << area;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
