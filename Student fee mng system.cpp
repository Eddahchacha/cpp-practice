
#include <iostream>
#include <string>
using namespace std;

// Create Student class
class Student
{
    private:
        string studentName;
        string admissionNumber;
        double feeBalance;

    public:

        // Function to input student details
        void inputStudent()
        {
            cout << "Enter student name: ";
            getline(cin, studentName);

            cout << "Enter admission number: ";
            getline(cin, admissionNumber);

            cout << "Enter fee balance: Ksh ";
            cin >> feeBalance;
        }

        // Function to make fee payment
        void makePayment()
        {
            double payment;

            cout << "Enter payment amount: Ksh ";
            cin >> payment;

            if (payment > 0 && payment <= feeBalance)
            {
                feeBalance = feeBalance - payment;

                cout << "\nPayment successful!" << endl;
            }
            else
            {
                cout << "\nInvalid payment amount!" << endl;
            }
        }

        // Function to display student fee status
        void displayStatus()
        {
            cout << "\n======= STUDENT FEE STATUS =======" << endl;
            cout << "Student Name: " << studentName << endl;
            cout << "Admission Number: " << admissionNumber << endl;
            cout << "Remaining Fee Balance: Ksh " << feeBalance << endl;
            cout << "==================================" << endl;
        }
};

int main()
{
    // Create Student object
    Student student1;

    // Call member functions
    student1.inputStudent();

    student1.makePayment();

    student1.displayStatus();

    return 0;
}
