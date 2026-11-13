
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    string employeeName;
    double basicSalary, bonus, totalSalary;

    // Loop to enter details for five employees
    for (int i = 1; i <= 5; i++)
    {
        cout << "\nEnter details for Employee " << i << endl;

        cout << "Enter employee name: ";
        getline(cin >> ws, employeeName);;

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        // Calculate bonus and total salary
        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        // Display employee report
        cout << "\n======= EMPLOYEE REPORT =======" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: Ksh " << basicSalary << endl;
        cout << "Bonus: Ksh " << bonus << endl;
        cout << "Total Salary: Ksh " << totalSalary << endl;
        cout << "===============================" << endl;
    }

    return 0;
}
