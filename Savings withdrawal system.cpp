
#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    double balance, withdrawalAmount;

    // Input initial account balance
    cout << "Enter account balance: Ksh ";
    cin >> balance;

    // Continue while the balance is greater than zero
    while (balance > 0)
    {
        cout << "\nEnter withdrawal amount: Ksh ";
        cin >> withdrawalAmount;

        // Check whether withdrawal is valid
        if (withdrawalAmount > balance)
        {
            cout << "Insufficient balance!" << endl;
            break;
        }

        if (withdrawalAmount <= 0)
        {
            cout << "Invalid withdrawal amount!" << endl;
            continue;
        }

        // Deduct withdrawal from balance
        balance = balance - withdrawalAmount;

        // Display remaining balance
        cout << "Withdrawal successful!" << endl;
        cout << "Remaining Balance: Ksh " << balance << endl;

        if (balance == 0)
        {
            cout << "Your account balance is zero." << endl;
        }
    }

    cout << "\nThank you for using our withdrawal system." << endl;

    return 0;
}
