// // Write a program to copy the content of one text file to another while changing the case of every alphabet

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{
    // // specify files names
    const char *sourceFile = "source.txt";
    const char *destinationFile = "destination.txt";

    // // create an instances of fstream for both reading and writing in a file
    fstream fcout, fcin;

    // // open file for reading
    fcin.open(sourceFile, ios::in);

    // // check if the file is successfully opened
    if (!fcin.is_open())
    {
        cout << "\nError: Unable to Open Source File...\n";
        return 1;
    }

    // // open file for writing
    fcout.open(destinationFile, ios::out);

    // // check if the file is successfully opened
    if (!fcout.is_open())
    {
        cout << "\nError: Unable to Open or Create Destination File...\n";
        return 1;
    }

    // // read characters from source file one by one and write in destination file
    char ch; // to store character

    do
    {
        // // read one character from file
        ch = fcin.get();

        // // if not reached to the end of file
        if (!fcin.eof())
            fcout << ch;

    } while (!fcin.eof());

    // // close files
    fcout.close();
    fcin.close();

    // // file copied successfully
    cout << "\nFile Successfully Copied..." << endl;

    cout << endl; // Add new line
    return 0;
}
