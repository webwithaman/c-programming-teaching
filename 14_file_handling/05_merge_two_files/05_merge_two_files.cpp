// // Write a C++ program to merge the content of two files and generate a new file

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{
    // // specify files names
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";
    const char *mergedFile = "merged_file.txt";

    // // create an instances of fstream for both reading and writing in a file
    fstream fcout, fcin;

    // // open file1 for reading
    fcin.open(file1, ios::in);

    // // check if the file is successfully opened
    if (!fcin.is_open())
    {
        cout << "\nError: Unable to Open File1...\n";
        return 1;
    }

    // // open file for writing
    fcout.open(mergedFile, ios::out);

    // // check if the file is successfully opened
    if (!fcout.is_open())
    {
        cout << "\nError: Unable to Open or Create New Merged File...\n";
        return 1;
    }

    // // read characters from file1 one by one and write in merged file
    char ch; // to store character

    do
    {
        // // read one character from file
        ch = fcin.get();

        // // if not reached to the end of file
        if (!fcin.eof())
            fcout << ch;

    } while (!fcin.eof());

    // // close file1
    fcin.close();

    // // open file2 for reading
    fcin.open(file2, ios::in);

    // // check if the file is successfully opened
    if (!fcin.is_open())
    {
        cout << "\nError: Unable to Open File1...\n";
        return 1;
    }

    // // add space in merged file
    fcout << " ";

    // // read characters from file2 one by one and write in merged file
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

    // // files merged successfully
    cout << "\nContent of the Files Merged Successfully..." << endl;

    cout << endl; // Add new line
    return 0;
}
