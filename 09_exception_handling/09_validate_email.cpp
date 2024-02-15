// // Write a C++ program to accept Gmail id only and throw an exception if the id does not contain @ and gmail.com.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

#define MAX_CHARS 31

// // Main Function Start
int main()
{

    try
    {
        char email[MAX_CHARS];
        int found = 0;

        cout << "\nEnter Email Address Must have '@' Symbol (MAX_CHAR " << MAX_CHARS - 1 << ") => ";
        cin.getline(email, MAX_CHARS);

        for (int i = 0; email[i]; i++)
        {
            if (email[i] == '@')
            {
                found = 1;
                break;
            }
        }

        if (!found)
            throw "Email Address is Invalid, Don't have '@' symbol";

        cout << "\nEmail is Valid...";
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
