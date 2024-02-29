// // Create an abstract class Vehicle with a pure virtual function start() and another pure virtual function stop(). Derive two classes Car and Motorcycle from Vehicle and implement the start() and stop() functions in each class. Create objects of both classes and call the start() and stop() functions to demonstrate the use of pure virtual functions.

// // Header files
#include <iostream>
#include <conio.h>

// // use namespace
using namespace std;

// // define class Vehicle
class Vehicle
{
public:
    // // pure virtual functions
    virtual void start() = 0;
    virtual void stop() = 0;
};

// // define class Car by inheriting class Vehicle
class Car : public Vehicle
{
public:
    // // override base class start function
    void start() override
    {
        cout << "\nCar Started...";
    }

    // // override base class stop function
    void stop() override
    {
        cout << "\nCar Stopped...";
    }
};

// // define class MotorCycle by inheriting class Vehicle
class MotorCycle : public Vehicle
{
public:
    // // override base class start function
    void start() override
    {
        cout << "\nMotorCycle Started...";
    }

    // // override base class stop function
    void stop() override
    {
        cout << "\nMotorCycle Stopped...";
    }
};

int main()
{
    // // create an instance of Car
    Car c1;
    c1.start();
    c1.stop();

    // // create an instance of MotorCycle
    MotorCycle m1;
    m1.start();
    m1.stop();

    cout << endl; // Add new line
    getch();
    return 0;
}
