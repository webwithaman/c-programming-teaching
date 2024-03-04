// // Write a C++ program to read a text file and count the number of characters in it.

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{

    // // specify file name
    const char *fileName = "read.txt";

    // // create an instance of ifstream for reading from a file
    ifstream fcin;

    // // open file for reading
    fcin.open(fileName, ios::in);

    // // check if the file is successfully opened
    if (!fcin.is_open())
    {
        cout << "\nError: Unable to Open File..." << endl;
        return 1;
    }

    // // read file character by character and count the characters
    char ch;         // to store character
    int counter = 0; // to count characters

    // // get one character from file
    ch = fcin.get();

    if (fcin.eof())
        cout << "\nFile is Empty...";
    else
        cout << "\n>>>>>>>>> Following is the Content Read From File <<<<<<<<<<\n";

    while (!fcin.eof()) // run till the end of the file
    {
        cout << ch; // display read character
        counter++;  // increment counter

        // // get one character from file
        ch = fcin.get();
    }

    // // display number of characters
    cout << "\n\nNumber of Characters in File => " << counter << endl;

    // // close file
    fcin.close();

    cout << endl; // Add new line
    return 0;
}
