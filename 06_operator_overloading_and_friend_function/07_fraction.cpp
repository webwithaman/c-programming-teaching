/*

Define a class fraction
class Fraction
{
  long numerator;
  long denominator;

  Public:
  fraction (long n=0, long d=0);
};

Overload the following operators as member or friend:
a. Unary ++ (pre and post both)
b. Overload as friend functions: operators << and >>.

*/

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Fraction
class Fraction
{

private:
    // // instance member variables
    long int numerator;
    long int denominator;

public:
    // // constructors
    Fraction()
    {
        numerator = denominator = 0;
    }

    Fraction(int n)
    {
        numerator = n;
        denominator = 0;
    }

    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }

    // // instance member function to set fraction
    void setFraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }

    // // instance member function to display fraction
    void showFraction()
    {
        cout << "\nNumberator => " << numerator;
        cout << "\nDenominator => " << denominator;
    }

    // // overload pre-increment (++a) operator
    Fraction operator++()
    {
        Fraction temp;
        temp.numerator = ++numerator;
        temp.denominator = ++denominator;
        return temp;
    }

    // // overload post-increment (a++) operator
    Fraction operator++(int)
    {
        Fraction temp;
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
    }

    // // overload pre-increment (--a) operator
    Fraction operator--()
    {
        Fraction temp;
        temp.numerator = --numerator;
        temp.denominator = --denominator;
        return temp;
    }

    // // overload post-increment (a--) operator
    Fraction operator--(int)
    {
        Fraction temp;
        temp.numerator = numerator--;
        temp.denominator = denominator--;
        return temp;
    }

    // // overload insertion (<<) operator
    friend Fraction operator<<(ostream &, Fraction &);

    // // overload extraction (>>) operator
    friend Fraction operator>>(istream &, Fraction &);
};

// // overload insertion (<<) operator
Fraction operator<<(ostream &temp, Fraction &f)
{
    cout << "\nNumberator => " << f.numerator;
    cout << "\nDenominator => " << f.denominator;
    return f;
}

// // overload extraction (>>) operator
Fraction operator>>(istream &temp, Fraction &f)
{
    cout << "\nEnter Numerator => ";
    cin >> f.numerator;
    cout << "\nEnter Denominator => ";
    cin >> f.denominator;
    return f;
}

// // Main Function Start
int main()
{
    int hr, min, sec;
    Fraction f1, f2; // create objects of Fraction

    // // Get two fraction
    cout << "\n>>>>>>>> Enter Two Fraction to Perform Operations <<<<<<<<<\n";

    // // Get 1st fraction
    cout << "\n>>>>>>>> Enter First Fraction <<<<<<<<<\n";
    cin >> f1;

    // // Get 2nd fraction
    cout << "\n>>>>>>>> Enter Second Fraction <<<<<<<<<\n";
    cin >> f2;

    // // display first fraction
    cout << "\n\n>>>>>>>> First Fraction  <<<<<<<<<\n";
    cout << f1;

    // // display second fraction
    cout << "\n\n>>>>>>>> Second Fraction  <<<<<<<<<\n";
    cout << f2;

    // // pre-increment (++a)
    ++c1;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number After Performing Pre-Increment (++a) <<<<<<<<<\n";
    c1.showData();

    // // post-increment (a++)
    c1++;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number After Performing Post-Increment (a++) <<<<<<<<<\n";
    c1.showData();

    // // pre-decrement (--a)
    --c1;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number After Performing Pre-Decrement (--a) <<<<<<<<<\n";
    c1.showData();

    // // post-decrement (a--)
    c1--;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number After Performing Post-Decrement (a--) <<<<<<<<<\n";
    c1.showData();

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
