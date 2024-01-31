#include <iostream>
#include <new>

class Student
{
private:
    int id;
    std::string name;

public:
    // Constructor
    Student(int studentId, const std::string &studentName) : id(studentId), name(studentName)
    {
        std::cout << "Constructor called for Student " << id << std::endl;
    }

    // Destructor
    ~Student()
    {
        std::cout << "Destructor called for Student " << id << std::endl;
    }

    // Display function
    void display() const
    {
        std::cout << "Student ID: " << id << ", Name: " << name << std::endl;
    }

    // Friend function to overload new operator
    friend void *operator new(size_t size);

    // Friend function to overload delete operator
    friend void operator delete(void *ptr) noexcept;

    // Friend function to overload new operator (nothrow version)
    friend void *operator new(size_t size, const std::nothrow_t &nothrow_constant) noexcept;

    // Friend function to overload delete operator (nothrow version)
    friend void operator delete(void *ptr, const std::nothrow_t &nothrow_constant) noexcept;
};

// Overload new operator using friend function
void *operator new(size_t size)
{
    std::cout << "Custom new operator called with size: " << size << " bytes." << std::endl;
    return ::operator new(size); // Use global new for memory allocation
}

// Overload delete operator using friend function
void operator delete(void *ptr) noexcept
{
    std::cout << "Custom delete operator called." << std::endl;
    ::operator delete(ptr); // Use global delete for memory deallocation
}

// Overload new operator (nothrow version) using friend function
void *operator new(size_t size, const std::nothrow_t &nothrow_constant) noexcept
{
    std::cout << "Custom new (nothrow) operator called with size: " << size << " bytes." << std::endl;
    return ::operator new(size, nothrow_constant); // Use global new (nothrow) for memory allocation
}

// Overload delete operator (nothrow version) using friend function
void operator delete(void *ptr, const std::nothrow_t &nothrow_constant) noexcept
{
    std::cout << "Custom delete (nothrow) operator called." << std::endl;
    ::operator delete(ptr, nothrow_constant); // Use global delete (nothrow) for memory deallocation
}

int main()
{
    // Create a student using overloaded new operator
    Student *student1 = new (std::nothrow) Student(1, "John Doe");

    // Display student information
    student1->display();

    // Delete the student using overloaded delete operator
    delete student1;

    return 0;
}
