
#include <iostream>
#include <string>
using namespace std;

// Create RoomBooking class
class RoomBooking
{
    private:
        string guestName;
        int roomNumber;
        int daysBooked;

    public:

        // Constructor
        RoomBooking(string name, int room, int days)
        {
            guestName = name;
            roomNumber = room;
            daysBooked = days;

            cout << "\nRoom booking confirmed!" << endl;
        }

        // Function to display booking details
        void displayBooking()
        {
            cout << "\n======= ROOM BOOKING DETAILS =======" << endl;
            cout << "Guest Name: " << guestName << endl;
            cout << "Room Number: " << roomNumber << endl;
            cout << "Days Booked: " << daysBooked << endl;
            cout << "====================================" << endl;
        }

        // Destructor
        ~RoomBooking()
        {
            cout << "\nBooking ended, room released." << endl;
        }
};

int main()
{
    // Create RoomBooking object
    RoomBooking booking1("Mary Jane", 205, 4);

    // Display booking details
    booking1.displayBooking();

    return 0;
}
