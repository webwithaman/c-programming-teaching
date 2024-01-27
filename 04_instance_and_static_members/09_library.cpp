// // Create a class Library with a static member variable totalBooks and a static member function getTotalBooks. Track the number of available books in the library.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Library
class Library
{

public:
    // // static function to find square of a number
    static long unsigned int square(int num)
    {
        return num * num;
    }
};

// // Main Function Start
int main()
{
    int num;
    long unsigned sq;
    cout << "\nEnter A Number to Find Square of it => ";
    cin >> num;

    // // call static member function (square) using class name and scope resolution
    sq = Library::square(num);

    // // print square of num
    cout << "\nSquare of " << num << " => " << sq;

    cout << "\n\nEnter Another Number to Find Square of it => ";
    cin >> num;

    Library m1;
    // // call static member function (square) using an object
    sq = m1.square(num);

    // // print square of num
    cout << "\nSquare of " << num << " => " << sq;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
