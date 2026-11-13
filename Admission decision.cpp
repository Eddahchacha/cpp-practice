
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    string studentName;
    int age, examScore;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    // Check admission requirements using nested if
    cout << "\n======= ADMISSION RESULTS =======" << endl;
    cout << "Student Name: " << studentName << endl;

    if (age >= 18)
    {
        if (examScore >= 50)
        {
            cout << "Admission Decision: Admitted" << endl;
        }
        else
        {
            cout << "Admission Decision: Not Admitted: Low Score" << endl;
        }
    }
    else
    {
        cout << "Admission Decision: Not Admitted: Underage" << endl;
    }

    cout << "=================================" << endl;

    return 0;
}
