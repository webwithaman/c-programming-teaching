// // Write a C++ program to open a file 'output.txt' and append data to it.

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{
    // // specify file name
    const char *fileName = "output.txt";
    const char *appendData = "Cpp Programming";

    // // create an instance of ofstream
    ofstream fout;

    // // open file for writing, if file not exist it will be created
    fout.open(fileName, ios::app);

    // // check if the file is successfully opened
    if (!fout.is_open())
    {
        cout << "\n!!! Unable to Open File...\n";
        return 1;
    }

    // // write data in file using insertion operator
    fout << appendData;

    cout << "\nData Appended Successfully..." << endl;

    // // close file
    fout.close();

    cout << endl; // Add new line
    return 0;
}
