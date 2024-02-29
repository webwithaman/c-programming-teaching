// // Create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called triangle and rectangle from the base shape. Add to the base class, a member function setData(double,double) to initialise base class data members and another member function displayArea() to compute and display the area of figures. Make displayArea() as a virtual function and redefine this function in the derived classes to suit their requirements. Using these three classes, design a program that will accept dimensions of a triangle or a rectangle interactively, and display the area. Remember the two values given as input will be treated as lengths of two sides in the case of rectangles, and as base and height in the case of the triangles.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Shape
class Shape
{
protected:
    // // instance member variables
    double d1, d2;

public:
    // instance member function to set data
    void setData(double d1, double d2)
    {
        this->d1 = d1;
        this->d2 = d2;
    }

    // instance member function to display the area
    virtual void displayArea()
    {
    }
};

// // define class Triangle by inheriting class Shape
class Triangle : public Shape
{
public:
    // instance member function to display the area
    void displayArea()
    {
        cout << "\nArea of Triangle => " << 0.5 * d1 * d2;
    }
};

// // define class Rectangle by inheriting class Shape
class Rectangle : public Shape
{
public:
    // instance member function to display the area
    void displayArea()
    {
        cout << "\nArea of Rectangle => " << d1 * d2;
    }
};

int main()
{
    Rectangle r1;
    r1.setData(4, 5);
    r1.displayArea();

    Triangle t1;
    t1.setData(4, 3);
    t1.displayArea();

    cout << endl; // Add new line
    getch();
    return 0;
}
