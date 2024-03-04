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

    // // create an instance of ofstream
    ifstream fcin;

    // // open file for reading
    fcin.open(fileName, ios::in);

    // // check if the file is successfully opened
    if (!fcin.is_open())
    {
        cout << "\n!!! Unable to Open File...\n";
        return 1;
    }

    // // read character by character from file and count
    char ch;
    int count = 0;

    cout << "\n>>>>>>>>> Following is the Content Read From File <<<<<<<<<<\n";

    // // get one character from file
    ch = fcin.get();

    while (!fcin.eof())
    {
        cout << ch;
        count++;

        // // get one character from file
        ch = fcin.get();
    }

    cout << "\n\nNumber of Characters in File => " << count;

    // // close file
    fcin.close();

    cout << endl; // Add new line
    return 0;
}
