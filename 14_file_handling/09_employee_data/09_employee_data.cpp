/*

A company has following details of their employees in the file 'emp.dat'
a. Emp Id
b. Emp Name
c. Emp Address
d. Emp Dept (admin / sales / production / design)
e. Emp Phone Number
f. Emp Age

Write a C++ program to read the above file. Create a new file such as adm.dat,
sal.dat, pro.dat, Design.dat respectively to store the employee details according to their department.

*/

// // Header files
#include <iostream>
#include <fstream>
#include <cstring>
#include <ctype.h>

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
    char name[MAX_CHARS_IN_NAME], address[MAX_CHARS_IN_ADDRESS], department[MAX_CHARS_IN_DEPARTMENT], phoneNumber[MAX_CHARS_IN_PHONE];

public:
    // // constructors
    Employee()
    {
        id = -1;
        age = -1;
        name[0] = 0;
        address[0] = 0;
        department[0] = 0;
        phoneNumber[0] = 0;
    }

    Employee(int id, const char *name, int age, const char *phoneNumber, const char *address, const char *department)
    {
        this->id = id;
        this->age = age;
        strcpy(this->name, name);
        strcpy(this->phoneNumber, phoneNumber);
        strcpy(this->address, address);

        char copyDepartment[strlen(department) + 1];

        int i;

        for (i = 0; department[i]; i++)
        {
            if (isalpha(department[i]))
            {
                if (isupper(department[i]))
                    copyDepartment[i] = tolower(department[i]);
                else
                    copyDepartment[i] = department[i];
            }
            copyDepartment[i] = department[i];
        }

        copyDepartment[i] = 0;

        strcpy(this->department, copyDepartment);
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

    // // instance member function to set phoneNumber
    void setPhoneNumber(const char *phoneNumber)
    {
        strcpy(this->phoneNumber, phoneNumber);
    }

    // // instance member function to get phoneNumber
    const char *getPhoneNumber()
    {
        return phoneNumber;
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
        char copyDepartment[strlen(department) + 1];

        int i;

        for (i = 0; department[i]; i++)
        {
            if (isalpha(department[i]))
            {
                if (isupper(department[i]))
                    copyDepartment[i] = tolower(department[i]);
                else
                    copyDepartment[i] = department[i];
            }
            copyDepartment[i] = department[i];
        }

        copyDepartment[i] = 0;

        strcpy(this->department, copyDepartment);
    }

    // // instance member function to get department
    const char *getDepartment()
    {
        return department;
    }

    // // instance member function to input and set employee data
    void inputEmployeeData()
    {
        int id;

        // // get and set employee id
        cout << "\nEnter Employee Id => ";
        cin >> id;

        // // set id
        setId(id);

        // // get name
        cout << "\nEnter Employee Name (MAX_CHARS " << Employee::MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, Employee::MAX_CHARS_IN_NAME);

        // // get age
        cout << "\nEnter Employee Age => ";
        cin >> age;

        // // get phone number
        cout << "\nEnter Employee Phone Number (MAX_CHARS " << Employee::MAX_CHARS_IN_PHONE - 1 << ") => ";
        cin.ignore();
        cin.getline(phoneNumber, Employee::MAX_CHARS_IN_PHONE);

        // // get address
        cout << "\nEnter Employee Address (MAX_CHARS " << Employee::MAX_CHARS_IN_ADDRESS - 1 << ") => ";
        cin.ignore();
        cin.getline(address, Employee::MAX_CHARS_IN_ADDRESS);

        // // get department
        int choice;
        while (true)
        {
            cout << "\n>>>>>>>>>> Choose Department <<<<<<<<<<<";
            cout << "\nPress 1. Admin";
            cout << "\nPress 2. Sales";
            cout << "\nPress 3. Production";
            cout << "\nPress 4. Design";
            cout << "\nEnter Department Number => ";
            cin >> choice;

            if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
            {
                cout << "\n!!!! Invalid Department Number... Try Again" << endl;
                cin.ignore();
            }
            else
            {
                if (choice == 1)
                    strcpy(department, "Admin");
                else if (choice == 2)
                    strcpy(department, "Sales");
                else if (choice == 3)
                    strcpy(department, "Production");
                else
                    strcpy(department, "Design");
                break;
            }
        }
    }

    // // instance member function to show employee data
    void showEmployeeData() const
    {
        cout << "\nEmployee Id => " << id;
        cout << "\nEmployee Name => " << name;
        cout << "\nEmployee Age => " << age;
        cout << "\nEmployee Phone Number => " << phoneNumber;
        cout << "\nEmployee Address => " << address;
        cout << "\nEmployee Department => " << department;
    }

    // // instance member function to store employee data
    int storeEmployeeData()
    {
        if (id == -1 || age == -1)
            return 0; // employee data not stored

        // // specify file name
        const char *fileName = "emp.dat";

        // create an instance of ofstream for writing in a file
        ofstream fout;

        // // open file in binary mode for writing and append data
        fout.open(fileName, ios::app | ios::binary);

        // // check if the file is successfully opened
        if (!fout.is_open())
            return 0; // employee data not stored

        fout.write((char *)this, sizeof(*this));

        // // close file
        fout.close();

        return 1; // employee data successfully stored
    }
};

// // function to fetch employees data from a fike and show
void fetchAndShowEmployeeData()
{
    // // specify file name
    const char *fileName = "emp.dat";

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

    // // close file
    fin.close();
}

// // function to read employees data from file and store in another files according to their departments
void readAndStoreEmpsByDepartmet()
{
    // // specify files names
    const char *inputFile = "emp.dat";
    const char *outputFiles[] = {"adm.dat", "sal.dat", "pro.dat", "des.data"};

    // // departments list
    char *departments[] = {"admin", "sales", "production", "design"};
    char empDepartment[Employee::MAX_CHARS_IN_DEPARTMENT];

    // create an instances of ifstream and ofstream for reading and writing in files
    ifstream fin;
    ofstream fout[4];

    // // open file in binary mode for reading
    fin.open(inputFile, ios::in | ios::binary);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File...";
        return;
    }

    // // open files in binary mode for writing
    for (int i = 0; i < 4; i++)
    {
        fout[i].open(outputFiles[i], ios::app | ios::binary);

        // // check if the file is successfully opened
        if (!fout[i].is_open())
        {
            cout << "\nError: Unable to Open File...";
            return;
        }
    }

    // // create an instance of Employee to store fetched data
    Employee tempEmployee;

    // // read employee data
    fin.read((char *)&tempEmployee, sizeof(tempEmployee));

    while (!fin.eof()) // run till the end of file
    {
        // // get and store employee department to compare
        strcpy(empDepartment, tempEmployee.getDepartment());

        int index;

        for (int i = 0; i < 4; i++)
        {
            if (!strcmp(empDepartment, departments[i]))
            {
                index = i;
                break;
            }
        }

        fout[index].write((char *)&tempEmployee, sizeof(tempEmployee));
        fin.read((char *)&tempEmployee, sizeof(tempEmployee));
    }

    // // close files
    fin.close();
    for (int i = 0; i < 4; i++)
    {
        fout[i].close();
    }
}

// // function to search a employee from file using employee id
void readAndShowEmpsOfGivenDepartmet(const char *department)
{
    char copyDepartment[strlen(department) + 1];

    int i;

    for (i = 0; department[i]; i++)
    {
        if (isalpha(department[i]))
        {
            if (isupper(department[i]))
                copyDepartment[i] = tolower(department[i]);
            else
                copyDepartment[i] = department[i];
        }
        copyDepartment[i] = department[i];
    }

    copyDepartment[i] = 0;

    const char *inputFile;

    ifstream fin;

    if (!strcmp(copyDepartment, "admin"))
        fin.open("adm.dat", ios::in | ios::binary);
    else if (!strcmp(copyDepartment, "production"))
        fin.open("pro.dat", ios::in | ios::binary);
    else if (!strcmp(copyDepartment, "sales"))
        fin.open("sal.dat", ios::in | ios::binary);
    else if (!strcmp(copyDepartment, "design"))
        fin.open("des.dat", ios::in | ios::binary);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File...";
        return;
    }

    // // create an instance of Employee to store fetched data
    Employee tempEmployee;

    // // read employee data
    fin.read((char *)&tempEmployee, sizeof(tempEmployee));

    while (!fin.eof()) // run till the end of file
    {
        tempEmployee.showEmployeeData();
        fin.read((char *)&tempEmployee, sizeof(tempEmployee));
    }

    // // close files
    fin.close();
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
    Employee *employees = new Employee[n];

    // // input, set and store employees data
    cout << "\n>>>>>>>>>> Enter Data of " << n << " Employees <<<<<<<<<<<<<" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>>>>> Enter Data of Employee " << i + 1 << " <<<<<<<<<<<<" << endl;

        // // input and set employee data
        employees[i].inputEmployeeData();

        // // store employee data
        if (!(employees[i].storeEmployeeData()))
        {
            cout << "\n!!! Employee Data Not Stored..." << endl;
            return 0;
        }
    }

    // // employees data stored successfully
    cout << "\nEmployees Data Successfully Stored..." << endl;

    // // read and show employees data
    cout << "\n>>>>>>>>>> Employees Data Stored In File <<<<<<<<<<<<<<";
    fetchAndShowEmployeeData();

    readAndStoreEmpsByDepartmet();

    char dep[100];
    cout << "\nEnetr de[ =>] ";
    cin >> dep;

    cout << "\n<<<<<< " << dep << " <<<<<<<<<<<<<<" << endl;

    readAndShowEmpsOfGivenDepartmet(dep);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
