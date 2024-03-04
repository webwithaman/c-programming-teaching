// // Write a C++ program that counts the total number of characters, words and lines in the file.

// // Header files
#include <iostream>
#include <fstream>

#define WORD_SIZE 50

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
    int charCounter = 0, wordCounter = 0, lineCounter = 0;
    char word[WORD_SIZE]; // to store word extracted from file

    // // get one character from file
    ch = fin.get();

    if (fin.eof())
        cout << "\nFile is Empty...";
    else
    {
        cout << "\n>>>>>>>>> Following is the Content Read From File <<<<<<<<<<\n";
        lineCounter++;
    }

    while (!fin.eof()) // run till the end of the file
    {
        cout << "\ntell g => " << fin.tellg();

        cout << ch;    // display read character
        charCounter++; // increment charCounter

        // // if new line character occurs
        if (ch == '\n')
            lineCounter++;

        // // get one character from file
        ch = fin.get();
    }

    cout << "\ntell g => " << fin.tellg();

    fin.seekg(1);

    cout << "\ntell g => " << fin.tellg();

    while (fin >> word) // run till the end of the file
        wordCounter++;

    // // display number of characters,words and lines
    cout << "\n\nNumber of Characters in File => " << charCounter << endl;
    cout << "Number of Words in File => " << wordCounter << endl;
    cout << "Number of Lines in File => " << lineCounter << endl;

    // // close file
    fin.close();

    cout << endl; // Add new line
    return 0;
}
