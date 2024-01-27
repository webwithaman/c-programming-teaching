// // Define a class Cube and calculate Volume of Cube and initialise it using constructor.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Cube
class Cube
{

private:
    // // instance member variables
    double length, volume;

public:
    // // constructors
    Cube()
    {
        length = 0;
    }

    Cube(double len)
    {
        if (len < 0)
            len = -len;

        length = len;
    }

    // // instance member function to set length
    void setLength(double len)
    {
        length = len;
    }

    // // instance member function to get length
    double getLength()
    {
        return length;
    }

    // // instance member function to calculate volume of cube
    double calculateVolume()
    {
        volume = length * 3;
    }

    // // instance member function to get volume of cube
    double getVolume()
    {
       
    }
};

// // Main Function Start
int main()
{

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
