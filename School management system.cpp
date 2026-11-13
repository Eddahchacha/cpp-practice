
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
    protected:
        string name;
        int age;

    public:

        // Function to display person details
        void displayPerson()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

// Derived class
class Student : public Person
{
    private:
        string admissionNumber;
        string studentClass;

    public:

        // Function to input student details
        void inputStudent()
        {
            cout << "Enter student name: ";
            getline(cin, name);

            cout << "Enter student age: ";
            cin >> age;

            cin.ignore();

            cout << "Enter admission number: ";
            getline(cin, admissionNumber);

            cout << "Enter student class: ";
            getline(cin, studentClass);
        }

        // Function to display student details
        void displayStudent()
        {
            cout << "\n======= STUDENT DETAILS =======" << endl;

            // Call inherited function
            displayPerson();

            cout << "Admission Number: " << admissionNumber << endl;
            cout << "Class: " << studentClass << endl;

            cout << "===============================" << endl;
        }
};

int main()
{
    // Create Student object
    Student student1;

    // Input student information
    student1.inputStudent();

    // Display student information
    student1.displayStudent();

    return 0;
}
