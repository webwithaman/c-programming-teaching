// // Write a C++ program to define a base class Item (itemNumber, name, price). Derive a class DiscountedItem (discountPercent, discountedPrice). A customer purchases 'n' items. Display the item-wise bill and total amount using appropriate format.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

// // use namespace
using namespace std;

// // define class Item
class Item
{

public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;

private:
    // // instance member variables
    char *name;
    int itemNumber;
    double price;

public:
    // // instance member function to set name
    void setName(const char *name)
    {
        int length = strlen(name);

        this->name = new char[length > MAX_CHARS_IN_NAME - 1 ? MAX_CHARS_IN_NAME : length + 1];

        if (length > MAX_CHARS_IN_NAME - 1)
        {
            strncpy(this->name, name, MAX_CHARS_IN_NAME - 1);
            this->name[MAX_CHARS_IN_NAME - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->name, name);
        }
    }

    // // instance member function to get name
    const char *getName() const
    {
        return name;
    }

    // // instance member function to set itemNumber
    void setItemNumber(int itemNumber)
    {
        this->itemNumber = itemNumber;
    }

    // // instance member function to get itemNumber
    int getItemNumber() const
    {
        return itemNumber;
    }

    // // instance member function to set price
    void setPrice(double price)
    {
        this->price = price;
    }

    // // instance member function to get price
    double getPrice()
    {
        return price;
    }

    // // destructor
    ~Item()
    {
        delete[] name;
    }
};

// // define class DiscountedItem
class DiscountedItem : public Item
{
private:
    // // instance member variables
    double discountPercent, discountedPrice;

public:
    // // instance member function to set discountPercent
    void setDiscountPercent(double dicountPercent)
    {
        this->discountPercent = dicountPercent;
    }

    // // instance member function to get discountPercent
    double getDiscountPercent()
    {
        return discountPercent;
    }

    // // instance member function to set discountedPrice
    void setDiscountedPrice(double dicountedPrice)
    {
        this->discountedPrice = dicountedPrice;
    }

    // // instance member function to get discountedPrice
    double getDiscountedPrice()
    {
        return discountedPrice;
    }
};

// // Main Function Start
int main()
{
    int n;
    cout << "\nHow Many Items You Want to Enter => ";
    cin >> n;

    // // invalid input
    if (n < 1)
    {
        cout << "\n!!! Invalid Input...";
        exit(0);
    }

    // // create an array of instances of DiscountedItem
    DiscountedItem discountedItems[n];
    char name[DiscountedItem::MAX_CHARS_IN_NAME];
    int itemNumber;
    double price, discountPercent, discountedPrice, totalPrice = 0, totalDiscount = 0;

    cout << "\n>>>>>>>>> Enter Details of " << n << " Items <<<<<<<<<<<\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>> Enter Details of Item-" << i + 1 << " <<<<<<<<<<\n";

        cout << "\nItem Number => ";
        cin >> itemNumber;

        cout << "\nItem Name (MAX_CHARS " << DiscountedItem::MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, DiscountedItem::MAX_CHARS_IN_NAME);

        cout << "\nItem Price => ";
        cin >> price;

        cout << "\nDiscount Percent => ";
        cin >> discountPercent;

        cout << "\nDiscounted Price => ";
        cin >> discountedPrice;

        discountedItems[i].setItemNumber(itemNumber);
        discountedItems[i].setName(name);
        discountedItems[i].setPrice(price);
        discountedItems[i].setDiscountPercent(discountPercent);
        discountedItems[i].setDiscountedPrice(discountedPrice);

        totalPrice += discountedItems[i].getPrice();
        totalDiscount += discountedItems[i].getDiscountPercent() / 100 * totalPrice;
    }

    cout << "\n>>>>>>>>> Details of " << n << " Items <<<<<<<<<<<\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>> Details of Item-" << i + 1 << " <<<<<<<<<<";
        cout << "\nItem Number => " << discountedItems[i].getItemNumber();
        cout << "\nName => " << discountedItems[i].getName();
        cout << "\nPrice => " << discountedItems[i].getPrice();
        cout << "\nDiscount Percent => " << discountedItems[i].getDiscountPercent();
        cout << "\nDiscounted Price => " << discountedItems[i].getDiscountedPrice();
    }

    cout << "\n\nTotal Price => " << totalPrice;
    cout << "\nTotal Discount => " << totalDiscount;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
