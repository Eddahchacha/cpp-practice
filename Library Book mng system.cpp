
#include <iostream>
#include <string>
using namespace std;

// Create a class named Book
class Book
{
    private:
        string bookTitle;
        string author;
        int availableCopies;

    public:

        // Function to input book details
        void inputDetails()
        {
            cout << "Enter book title: ";
            getline(cin, bookTitle);

            cout << "Enter author name: ";
            getline(cin, author);

            cout << "Enter number of available copies: ";
            cin >> availableCopies;
        }

        // Function to borrow a book
        void borrowBook()
        {
            if (availableCopies > 0)
            {
                availableCopies--;

                cout << "\nBook borrowed successfully!" << endl;
            }
            else
            {
                cout << "\nSorry, no copies are available." << endl;
            }
        }

        // Function to display book details
        void displayDetails()
        {
            cout << "\n======= BOOK DETAILS =======" << endl;
            cout << "Book Title: " << bookTitle << endl;
            cout << "Author: " << author << endl;
            cout << "Available Copies: " << availableCopies << endl;
            cout << "============================" << endl;
        }
};

int main()
{
    // Create an object of the Book class
    Book book1;

    // Call member functions
    book1.inputDetails();

    book1.borrowBook();

    book1.displayDetails();

    return 0;
}
