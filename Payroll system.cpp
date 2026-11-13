
#include <iostream>
#include <string>
using namespace std;

// Global variables
string employeeName;
double basicSalary, overtimeHours;
double overtimePay, netSalary;

// Function to input employee details
void getEmployeeDetails()
{
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

// Function to calculate overtime pay
double calculateOvertimePay()
{
    const double ratePerHour = 200;

    overtimePay = overtimeHours * ratePerHour;

    return overtimePay;
}

// Function to calculate net salary
double calculateNetSalary()
{
    netSalary = basicSalary + overtimePay;

    return netSalary;
}

// Function to display employee payslip
void displayPayslip()
{
    cout << "\n========== EMPLOYEE PAYSLIP ==========" << endl;
    cout << "Employee Name: " << employeeName << endl;
    cout << "Basic Salary: Ksh " << basicSalary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Pay: Ksh " << overtimePay << endl;
    cout << "Net Salary: Ksh " << netSalary << endl;
    cout << "======================================" << endl;
}

int main()
{
    // Call functions in logical sequence
    getEmployeeDetails();

    calculateOvertimePay();

    calculateNetSalary();

    displayPayslip();

    return 0;
}
