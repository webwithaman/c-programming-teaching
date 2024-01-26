// Create a class named Person with instance member variables for name, age Implement functions to set and display the details of a person.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

#define MAX_CHARS_NAME 31

// // use namespace
using namespace std;

// // define class Person
class Person
{
    // // instance member variables
    char name[MAX_CHARS_NAME];
    int age;

public:
    // instance member function to set age
    void setAge(int a)
    {
        age = a;
    }

    // instance member function to set name
    void setName(char *nm)
    {
        strcpy(name, nm);
    }

    // instance member function to get age
    int getAge()
    {
        return age;
    }

    // instance member function to get name
    char *getName(char *nm)
    {
        strcpy(nm, name);
        return nm;
    }
};

// // Main Function Start
int main()
{
    Person p1; // create object of Person
    char name[MAX_CHARS_NAME];
    int age;

    // // Get person's Data
    cout << "\nEnter Person's Age => ";
    cin >> age;

    cout << "\nEnter Person's Name (MAX_CHARACTERS " << MAX_CHARS_NAME - 1 << ") => ";
    cin.ignore();
    cin.getline(name, MAX_CHARS_NAME);

    // // set persons's data
    p1.setAge(age);
    p1.setName(name);

    // // get and display persons's data
    cout << "\nPerson's Age Number => " << p1.getAge();
    cout << "\nPerson's Name => " << p1.getName(name);

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
