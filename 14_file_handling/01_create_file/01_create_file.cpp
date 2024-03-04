// // Write a C++ program to create a file and print “File created successfully” and throw an error if file is not created.

// // Header files
#include <iostream>
#include <fstream>
#include <conio.h>

// // use namespace
using namespace std;

int main()
{

    // // create an instance of ofstream
    ofstream fout;

    fout.open("test.txt", ios::out);

    if (!fout)
        cout << "\n!!! File Not Created...";
    else
        cout << "\nFile Created Successfully...";

    cout << endl; // Add new line
    // cin.ignore();
    cin.ignore();
    return 0;
}
