// // Create a class Library with a static member variable totalBooks and a static member function getTotalBooks. Track the number of available books in the library.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

#define MAX_CHARS_NAME 31

// // define class Library
class Library
{

private:
    // static member variables
    static unsigned int MAX_CHARS_IN_TITLE,
        totalBooks;

    // // instance member variables
    unsigned int bookId;
    char bookTitle[MAX_CHARS_NAME];

public:
    // // static function to get Total Books
    unsigned int getTotalBooks()
    {
        return totalBooks;
    }

    // // instance member function to set Book Id
    void setBookId(int id)
    {
        if (id < 0) // if id is negative make it positive
            id = -id;

        bookId = id;
    }

    // // instance member function to get Book Id
    unsigned int getBookId()
    {
        return bookId;
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
