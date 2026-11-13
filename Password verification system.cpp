
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Predefined username and password
    string correctUsername = "admin";
    string correctPassword = "12345";

    // Variables to store user input
    string username, password;

    // Use do-while loop for password verification
    do
    {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        // Check login credentials
        if (username == correctUsername &&
            password == correctPassword)
        {
            cout << "\nAccess Granted!" << endl;
        }
        else
        {
            cout << "\nIncorrect credentials, try again." << endl;
        }

    } while (username != correctUsername ||
             password != correctPassword);

    return 0;
}
