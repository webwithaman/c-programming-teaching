// // Create a class Marks that have one member variable marks and one member function that will print marks. We know that we can access member functions using (.) dot operator. Now you need to overload (->) arrow operator to access that function.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Marks
class Marks
{
private:
    // // instance memeber variable
    int marks;

public:
    // // constructors
    Marks()
    {
        marks = 0;
    }

    Marks(int marks)
    {
        this->marks = marks;
    }

    // // instance member function to print marks
    void printMarks()
    {
        cout << "\nMarks => " << marks;
    }

    // // overload member access operator (->)
    void operator->()
    {
    }
};

int main()
{

    Marks m1(445); // create an object of Marks class

    cout << endl; // Add new line
    getch();
    return 0;
}
