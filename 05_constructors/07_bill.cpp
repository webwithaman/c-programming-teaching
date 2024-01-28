/*

Define a class Bill with instance memebr variables name and id, initialize these using constructor. Define more properties such as units and bill amount along with member function get details of customer, calculateBill() function to calculate electricity bill using below tariff :-

- 0 - 99 unit RS. 1.20 per unit
- 100 - 200 unit RS. 2 per unit
- 201 and above units RS. 3 per unit.

*/

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

// // use namespace
using namespace std;

// // define class Person
class Bill
{
public:
    // // static member variables
    static const unsigned int MAX_CHARS_NAME = 31;

private:
    // // instance member variables
    char name[MAX_CHARS_NAME];
    int id;
    double electUnits, billAmount;

public:
    // // constructors
    Bill() {}

    Bill(char *nm)
    {
        strcpy(name, nm);
    }

    Bill(int i)
    {
        id = i;
    }

    Bill(char *nm, int i)
    {
        strcpy(name, nm);
        id = i;
    }

    Bill(char *nm, int i)
    {
        strcpy(name, nm);
        id = i;
    }

    // // overloaded instance member function to set customer details
    void setData(char *nm, int i)
    {
        strcpy(name, nm);
        id = i;
    }

    // // overloaded instance member function to set customer details
    void setData(int i, char *nm)
    {
        strcpy(name, nm);
        id = i;
    }

    // // overloaded instance member function to show customer details
    void showData()
    {
        cout << "Name => " << name << ", Id => " << id;
    }

    // // instance member function to set id
    void setId(int i)
    {
        id = i;
    }

    // // instance member function to set name
    void setName(char *nm)
    {
        strcpy(name, nm);
    }

    // // instance member function to get id
    int getId()
    {
        return id;
    }

    // // instance member function to get name
    char *getName(char *nm)
    {
        strcpy(nm, name);
        return nm;
    }

    // // instance member function to set electricity units
    void setElectricityUnits(double units)
    {
        electUnits = units;
    }

    // // instance member function to get electricity units
    double getElectricityUnits()
    {
        return electUnits;
    }

    // // instance member function to calculate bill amount
    double calculateBill()
    {

        if (electUnits > 99)
        {
            if (electUnits > 200)
                billAmount = 99 * 1.20 + 101 * 2 + (electUnits - 200) * 3;
            else
                billAmount = 99 * 1.20 + (electUnits - 99) * 2;
        }
        else
            billAmount = electUnits * 1.20;

        return billAmount;
    }

    // // instance member function to get bill amount
    double getBill()
    {
        return billAmount;
    }
};

// // Main Function Start
int main()
{

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
