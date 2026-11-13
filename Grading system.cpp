
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    string studentName;
    int marks;
    char grade;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks: ";
    cin >> marks;

    // Determine student grade
    if (marks >= 70 && marks <= 100)
    {
        grade = 'A';
    }
    else if (marks >= 60 && marks < 70)
    {
        grade = 'B';
    }
    else if (marks >= 50 && marks < 60)
    {
        grade = 'C';
    }
    else if (marks >= 40 && marks < 50)
    {
        grade = 'D';
    }
    else if (marks >= 0 && marks < 40)
    {
        grade = 'E';
    }
    else
    {
        cout << "Invalid marks entered!" << endl;
        return 0;
    }

    // Display student results
    cout << "\n======= STUDENT RESULTS =======" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Exam Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    cout << "===============================" << endl;

    return 0;
}
