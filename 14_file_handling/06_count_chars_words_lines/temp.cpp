// // Write a C++ program that counts the total number of characters, words and lines in the file.

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
    ifstream fin;

    // // open file for reading
    fin.open(fileName, ios::in);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File..." << endl;
        return 1;
    }

    // // read file character by character and count the characters, words and lines
    char ch; // to store character
    int counter = 0;

    while (!fin.eof()) // run till the end of the file
    {
        cout << ch; // display read character
        counter++;  // increment charCounter

        // // get one character from file
        ch = fin.get();
    }

    // // display number of characters,words and lines
    cout << "\n\nNumber of Characters in File => " << counter << endl;

    // // close file
    fin.close();

    cout << endl; // Add new line
    return 0;
}
