// // Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle, triangle and circle etc.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

// // use namespace
using namespace std;

// // define class Shape
class Shape
{

private:
    // // instance member variables
    char shape[10];
    double dim1, dim2, area;

public:
    // // instance member function to set shape
    void setShape(char *shp)
    {
        strlwr(shp);
        strcpy(shape, shp);
    }

    // // instance member function to get shape
    char *getShape(char *shp)
    {
        strcpy(shp, shape);
        return shp;
    }

    // // instance member function to set dimensions
    double setDimensions(double d1, double d2 = 0)
    {
        dim1 = d1;
        dim2 = d2;
    }

    // // instance member function to calculate area
    void calculateArea()
    {
        if (strcmp(shape, "square") == 0)
            area = dim1 * dim1;
        else if (strcmp(shape, "rectangle") == 0)
            area = dim1 * dim2;
        else if (strcmp(shape, "triangle") == 0)
            area = (dim1 * dim2) / 2;
        else
            area = 22.0 / 7 * dim1 * dim1;
    }

    // // instance member function to get the area
    double getArea()
    {
        return area;
    }
};

// // Main Function Start
int main()
{
    Shape square, rectangle, triangle, circle; // create objects of Shape
    double dim1, dim2, area;

    // // Get length of a square to find its area
    cout << "\nEnter Length of A Square => ";
    cin >> dim1;

    square.setShape((char *)"square"); // set shape
    square.setDimensions(dim1);        // set dimensions of square
    square.calculateArea();            // find area

    // // Get and display area of rectangle
    area = square.getArea();
    cout << "\nArea of Square => " << area;

    // // Get length and breadth of a rectangle to find its area
    cout << "\n\nEnter Length and Breadth of A Rectangle => ";
    cin >> dim1 >> dim2;

    rectangle.setShape((char *)"rectangle"); // set shape
    rectangle.setDimensions(dim1, dim2);     // set dimensions of rectangle
    rectangle.calculateArea();               // find area

    // // Get and display area of rectangle
    area = rectangle.getArea();
    cout << "\nArea of Rectangle => " << area;

    // // Get length and breadth of a rectangle to find its area
    cout << "\n\nEnter Height and Breadth of A Triangle => ";
    cin >> dim1 >> dim2;

    triangle.setShape((char *)"triangle"); // set shape
    triangle.setDimensions(dim1, dim2);    // set dimensions of triangle
    triangle.calculateArea();              // find area

    // // Get and display area of rectangle
    area = triangle.getArea();
    cout << "\nArea of Triangle => " << area;

    // // Get radius of a circle to find its area
    cout << "\n\nEnter Radius of A Circle => ";
    cin >> dim1;

    circle.setShape((char *)"circle"); // set shape
    circle.setDimensions(dim1);        // set dimension of circle
    circle.calculateArea();            // find area

    // // Get and display area of circle
    area = circle.getArea();
    cout << "\nArea of Circle => " << area;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
