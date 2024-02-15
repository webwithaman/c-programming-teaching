// // Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

#define MAX_CHARS 7

// // Main Function Start
int main()
{

    try
    {
        char pinCode[MAX_CHARS];
        int count = 0;

        cout << "\nEnter Pin Code (Must Be of 6 Digits , MAX_DIGITS " << MAX_CHARS - 1 << ") => ";
        cin.getline(pinCode, MAX_CHARS);

        while (pinCode[count])
        {
            if (pinCode[count] < '0' || pinCode[count] > '9')
            {
                count = 0;
                break;
            }

            count++;
        }

        if (count != 6)
            throw "Pin Code is Invalid";

        cout << "\nPin Code is Valid...";
    }
    catch (const char *e)
    {
        cout << e;
    }

    cout
        << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
