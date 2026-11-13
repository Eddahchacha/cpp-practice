
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone, totalSales;

    // Input customer details
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> pricePerPhone;

    // Calculate total sales amount
    totalSales = quantity * pricePerPhone;

    // Display sales receipt
    cout << "\n========== SALES RECEIPT ==========" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Model: " << phoneModel << endl;
    cout << "Quantity Bought: " << quantity << endl;
    cout << "Price Per Phone: Ksh " << pricePerPhone << endl;
    cout << "Total Sales Amount: Ksh " << totalSales << endl;
    cout << "===================================" << endl;

    return 0;
}
