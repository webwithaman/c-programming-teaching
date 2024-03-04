#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const char *fileName = "read.txt";
    ifstream fin;

    fin.open(fileName, ios::in);

    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File..." << endl;
        return 1;
    }

    char ch; // to store character
    int counter = 0;

    while (fin.get(ch))
    {
        cout << ch; // display read character
        counter++;  // increment charCounter
    }

    // display number of characters
    cout << "\n\nNumber of Characters in File => " << counter << endl;

    fin.close();

    cout << endl; // Add new line
    return 0;
}
