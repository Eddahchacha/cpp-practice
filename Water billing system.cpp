
#include <iostream>
#include <string>
using namespace std;

// Global variables
string customerName;
double unitsConsumed;
double totalBill, discount, finalAmount;

// Function to input customer details
void getCustomerDetails()
{
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

// Function to calculate water bill
double calculateBill()
{
    const double ratePerUnit = 50;

    totalBill = unitsConsumed * ratePerUnit;

    return totalBill;
}

// Function to apply discount
double applyDiscount()
{
    if (unitsConsumed > 100)
    {
        discount = totalBill * 0.10;
    }
    else
    {
        discount = 0;
    }

    finalAmount = totalBill - discount;

    return finalAmount;
}

// Function to display water bill
void displayBill()
{
    cout << "\n========== WATER BILL ==========" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Total Bill Before Discount: Ksh " << totalBill << endl;
    cout << "Discount: Ksh " << discount << endl;
    cout << "Final Amount Payable: Ksh " << finalAmount << endl;
    cout << "================================" << endl;
}

int main()
{
    // Call functions in logical sequence
    getCustomerDetails();

    calculateBill();

    applyDiscount();

    displayBill();

    return 0;
}
