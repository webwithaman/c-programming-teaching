// // Define a class Student having member variables roll and name. Now, define instance member functions to set data of these member variables and display these member variables.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

// // use namespace
using namespace std;

// // define class Student
class Student
{
    static const int MAX_CHARS_NAME = 31;
    char name[MAX_CHARS_NAME];
    int roll;

public:
    // instance member function to set roll
    void setRoll(int r)
    {
        roll = r;
    }

    // instance member function to set name
    void setRoll(char *nm)
    {
        strcpy(name, nm);
    }

    // instance member function to display roll
    void displayRoll()
    {
        
    }
};

// // Main Function Start
int main()
{
    Student c1; // create object of Student
    float real, imag;

    // Get Student number
    cout << "\n>>>>>>>> Enter A Student Number <<<<<<<<<\n";
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    c1.setStudent(real, imag); // set complex number

    cout << "\n>>>>>>>> Entered Student Number <<<<<<<<<";
    c1.displayStudent(); // display complex number

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
