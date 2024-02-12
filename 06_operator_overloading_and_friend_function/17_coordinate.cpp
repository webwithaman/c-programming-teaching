// // Create a Coordinate class for 3 variables x,y and z and overload comma operator such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2 and c3 are objects of 3D coordinate class.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Coordinate
class Coordinate
{
private:
    // // instance memeber variable
    int x, y, z;

public:
    // // Constructor
    Coordinate()
    {
        x = y = z = 0;
    }

    Coordinate(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    // // instance memebr function to get value
    void setValues(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    // // instance memebr function to get value
    int showValues()
    {
        cout << "\nx => " << x;
        cout << "\ny => " << y;
        cout << "\nz => " << z;
    }

    // overload logical comma (,) operator
    Coordinate operator,(Coordinate p)
    {
        return p;
    }
};

int main()
{

    Coordinate c1(2, 4, 6), c2(4, 2, 135), c3; // create objects of Coordinate class

    c3 = (c1, c2);

    cout << "\n\n>>>>>>>>>>> Coordinates of c1 <<<<<<<<<<<";
    c1.showValues();
    cout << "\n\n>>>>>>>>>>> Coordinates of c2 <<<<<<<<<<<";
    c2.showValues();
    cout << "\n\n>>>>>>>>>>> Coordinates of c3 <<<<<<<<<<<";
    c3.showValues();

    cout << endl; // Add new line
    getch();
    return 0;
}
