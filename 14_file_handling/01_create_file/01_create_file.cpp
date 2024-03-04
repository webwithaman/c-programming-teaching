// // Write a C++ program to create a file and print “File created successfully”,otherwise display "Unable to Create a File"

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{

    // // specify file name
    const char *fileName = "newfile.txt";

    // // create an instance of ofstream
    ofstream fout;

    // // open file for writing, if file not exist it will be created
    fout.open(fileName);

    // // check if the file is successfully opened
    if (fout.is_open())
        cout << "\nFile Created Successfully...\n";
    else
        cout << "\n!!! Unable to Create File..\n.";

    // // close file
    fout.close();

    cout << endl; // Add new line
    return 0;
}
