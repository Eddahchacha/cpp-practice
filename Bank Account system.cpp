
#include <iostream>
#include <string>
using namespace std;

// Create BankAccount class
class BankAccount
{
    private:
        string accountHolder;
        string accountNumber;
        double accountBalance;

    public:

        // Constructor
        BankAccount(string holder, string number, double balance)
        {
            accountHolder = holder;
            accountNumber = number;
            accountBalance = balance;

            cout << "\nAccount successfully created!" << endl;
        }

        // Function to display account details
        void displayAccount()
        {
            cout << "\n======= BANK ACCOUNT DETAILS =======" << endl;
            cout << "Account Holder: " << accountHolder << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Balance: Ksh " << accountBalance << endl;
            cout << "====================================" << endl;
        }

        // Destructor
        ~BankAccount()
        {
            cout << "\nAccount closed successfully!" << endl;
        }
};

int main()
{
    // Create an object and initialize its attributes
    BankAccount account1("John Mwangi", "123456789", 50000);

    // Display account details
    account1.displayAccount();

    return 0;
}
