/*

A company has following details of their employees in the file 'emp.dat'
a. Emp Id
b. Emp Name
c. Emp Address
d. Emp Dept (Admin/Sales/Production/IT)
e. Emp Phone
f. Emp Age

Write a C++ program to read the above file. Create a new file such as adm.dat,
sal.dat, pro.dat, IT.dat respectively to store the employee details according to their department.

*/

// // Header files
#include <iostream>
#include <fstream>
#include <cstring>

// // use namespace
using namespace std;

#define MAX_BOOKS 50

// // define class Employee
class Employee
{
public:
    // // static member variables
    static const unsigned int MAX_CHARS_IN_ADDRESS = 51;
    static const unsigned int MAX_CHARS_IN_NAME = 31;
    static const unsigned int MAX_CHARS_IN_DEPARTMENT = 31;
    static const unsigned int MAX_CHARS_IN_PHONE = 11;

private:
    // // instance member variables
    unsigned int id, age;
    char name[MAX_CHARS_IN_NAME], address[MAX_CHARS_IN_ADDRESS], department[MAX_CHARS_IN_DEPARTMENT], phone[MAX_CHARS_IN_PHONE];

public:
    // // constructors
    Employee()
    {
        id = -1;
        age = -1;
        name[0] = 0;
        address[0] = 0;
        department[0] = 0;
        phone[0] = 0;
    }

    Employee(int id, const char *name, int age, const char *phone, const char *address, const char *department)
    {
        this->id = id;
        this->age = age;
        strcpy(this->name, name);
        strcpy(this->phone, phone);
        strcpy(this->address, address);
        strcpy(this->department, department);
    }

    // // instance member function to set id
    void setId(int id)
    {
        if (id < 0) // if id is negative make it positive
            id = -id;

        this->id = id;
    }

    // // instance member function to get id
    unsigned int getId()
    {
        return id;
    }

    // // instance member function to set age
    void setAge(int age)
    {
        if (age < 0) // if age is negative make it positive
            age = -age;

        this->age = age;
    }

    // // instance member function to get age
    unsigned int getAge()
    {
        return age;
    }

    // // instance member function to set name
    void setName(const char *name)
    {
        strcpy(this->name, name);
    }

    // // instance member function to get name
    const char *getName()
    {
        return name;
    }

    // // instance member function to set phone
    void setPhone(const char *phone)
    {
        strcpy(this->phone, phone);
    }

    // // instance member function to get phone
    const char *getPhone()
    {
        return phone;
    }

    // // instance member function to set address
    void setAddress(const char *address)
    {
        strcpy(this->address, address);
    }

    // // instance member function to get address
    const char *getAddress()
    {
        return address;
    }

    // // instance member function to set department
    void setDepartment(const char *department)
    {
        strcpy(this->department, department);
    }

    // // instance member function to get department
    const char *getDepartment()
    {
        return department;
    }

    // // instance member function to input and set employee data
    void inputEmployeeData()
    {
        int empId;
        char bookTitle[Employee::MAX_CHARS_IN_TITLE];
        double bookPrice;

        // // Get book id
        cout << "\nEnter Employee Id => ";
        cin >> empId;

        // // Get book title
        cout << "\nEnter Employee Title (MAX_CHARS " << Employee::MAX_CHARS_IN_TITLE - 1 << ") => ";
        cin.ignore();
        cin.getline(bookTitle, Employee::MAX_CHARS_IN_TITLE);

        // // Get book price
        cout << "\nEnter Employee Price => ";
        cin >> bookPrice;

        // // set data
        setEmployeeId(empId);
        setEmployeeTitle(bookTitle);
        setEmployeePrice(bookPrice);
    }

    // // instance member function to show book data
    void showEmployeeData()
    {
        cout << "\nEmployee Id => " << empId;
        cout << "\nEmployee Title => " << bookTitle;
        cout << "\nEmployee Price => " << bookPrice;
    }

    // // instance member function to store book record
    int storeEmployeeData()
    {
        if (empId == -1 || bookPrice == -1)
            return 0; // book data not stored

        // // specify file name
        const char *fileName = "books_data.dat";

        // create an instance of ofstream for writing in a file
        ofstream fout;

        // // open file in binary mode for writing and append data
        fout.open(fileName, ios::app | ios::binary);

        // // check if the file is successfully opened
        if (!fout.is_open())
            return 0; // book data not stored

        fout.write((char *)this, sizeof(*this));

        return 1; // book data successfully stored
    }
};

// // function to fetch books data from a fike and show
void fetchAndShowEmployeeData()
{
    // // specify file name
    const char *fileName = "books_data.dat";

    // create an instance of ifstream for reading from a file
    ifstream fin;

    // // open file in binary mode for reading
    fin.open(fileName, ios::in | ios::binary);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File...";
        return;
    }

    // // create an instance of Employee to store fetched data
    Employee tempEmployee;

    fin.read((char *)&tempEmployee, sizeof(tempEmployee));

    while (!fin.eof())
    {
        cout << endl;
        tempEmployee.showEmployeeData();
        cout << endl;
        fin.read((char *)&tempEmployee, sizeof(tempEmployee));
    }
}

// // function to search a book from file using book id
void searchEmployeeById(int empId)
{
    // // specify file name
    const char *fileName = "books_data.dat";

    // create an instance of ifstream for reading from a file
    ifstream fin;

    // // open file in binary mode for reading
    fin.open(fileName, ios::in | ios::binary);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File...";
        return;
    }

    // // create an instance of Employee to store fetched data
    Employee tempEmployee;
    int found = 0;

    fin.read((char *)&tempEmployee, sizeof(tempEmployee));

    while (!fin.eof())
    {
        if (tempEmployee.getEmployeeId() == empId)
        {
            cout << "\n>>>>>>>>> Employee Found <<<<<<<<" << endl;
            tempEmployee.showEmployeeData();
            found = 1;
            break;
        }

        fin.read((char *)&tempEmployee, sizeof(tempEmployee));
    }

    if (!found)
        cout << "\nThere is No Employee Data Stored having Employee Id " << empId << endl;
}

// // Main Function Start
int main()
{
    int n;

    cout << "\nHow Many Employees' Data You Want to Store (MAX " << MAX_BOOKS << ") => ";
    cin >> n;

    // // invalid input
    if (n < 1 || n > MAX_BOOKS)
    {
        cout << "\n!!! Invalid Input..." << endl;
        return 0;
    }

    // // dynamically allocate memory for n objects of Employee
    Employee *books = new Employee[n];

    // // input, set and store books data
    cout << "\n>>>>>>>>>> Enter Data of " << n << " Employees <<<<<<<<<<<<<" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>>>>> Enter Data of Employee " << i + 1 << " <<<<<<<<<<<<" << endl;

        // // input and set book data
        books[i].inputEmployeeData();

        // // store book data
        if (!(books[i].storeEmployeeData()))
        {
            cout << "\n!!! Employee Data Not Stored..." << endl;
            return 0;
        }
    }

    // // books data stored successfully
    cout << "\nEmployees Data Successfully Stored..." << endl;

    // // read and show books data
    cout << "\n>>>>>>>>>> Employees Data Stored In File <<<<<<<<<<<<<<";
    fetchAndShowEmployeeData();

    // // get book id to search a book in file
    int empId;

    cout << "\nEnter Employee Id to Search A Employee => ";
    cin >> empId;

    // // search book
    searchEmployeeById(empId);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
