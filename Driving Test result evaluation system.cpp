
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    string studentName;
    float theoryMarks, practicalMarks, averageScore;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    // Calculate average score
    averageScore = (theoryMarks + practicalMarks) / 2;

    // Display student results
    cout << "\n======= DRIVING TEST RESULTS =======" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Theory Marks: " << theoryMarks << endl;
    cout << "Practical Marks: " << practicalMarks << endl;
    cout << "Average Score: " << averageScore << endl;

    // Check whether the student passed or failed
    if (averageScore >= 50)
    {
        cout << "Result: PASS" << endl;
    }
    else
    {
        cout << "Result: FAIL" << endl;
    }

    cout << "====================================" << endl;

    return 0;
}
