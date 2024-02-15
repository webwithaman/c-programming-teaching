// // Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

#define MAX_CHARS 11

// // Main Function Start
int main()
{

    try
    {
        char mobileNumber[MAX_CHARS];
        int count = 0;

        cout << "\nEnter Your Mobile Number (Must Be of 10 Digits , MAX_DIGITS " << MAX_CHARS - 1 << ") => ";
        cin.getline(mobileNumber, MAX_CHARS);

        while (mobileNumber[count])
        {
            if (mobileNumber[count] < '0' || mobileNumber[count] > '9')
            {
                count = 0;
                break;
            }

            count++;
        }

        if (count != 10)
            throw "Mobile Number is Invalid";

        cout << "\nMobile Number is Valid...";
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
