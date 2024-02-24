#include <iostream>
#include <conio.h>

using namespace std;

class AcceptNumbers
{
protected:
    double m1, m2, m3;

public:
    void setMarks(double m1, double m2, double m3)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
};

class TotalMarks : public AcceptNumbers
{
protected:
    double totalMarks;

public:
    double calculateTotalMarks()
    {
        totalMarks = m1 + m2 + m3;
        return totalMarks;
    }
};

class Percentage : public TotalMarks
{
private:
    double percentage;

public:
    double calculatePercentage()
    {
        percentage = (totalMarks / 300) * 100;
        return percentage;
    }
};

int main()
{
    Percentage p1;
    p1.setMarks(65, 82, 56);

    cout << "\nTotal Marks => " << p1.calculateTotalMarks();
    cout << "\nPercentage => " << p1.calculatePercentage() << "%";

    cout << endl;
    getch();
    return 0;
}
