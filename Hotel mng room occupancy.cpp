
#include <iostream>
using namespace std;

int main()
{
    // Declare a two-dimensional array
    int occupancy[5][10];
    int occupied, vacant;

    // Input room occupancy information
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter occupancy for Floor " << i + 1 << endl;

        for (int j = 0; j < 10; j++)
        {
            cout << "Room " << j + 1 << " (1 = Occupied, 0 = Vacant): ";
            cin >> occupancy[i][j];

            // Validate occupancy input
            while (occupancy[i][j] != 0 && occupancy[i][j] != 1)
            {
                cout << "Enter only 1 or 0: ";
                cin >> occupancy[i][j];
            }
        }
    }

    // Calculate occupied and vacant rooms per floor
    cout << "\n======= ROOM OCCUPANCY REPORT =======" << endl;

    for (int i = 0; i < 5; i++)
    {
        occupied = 0;
        vacant = 0;

        for (int j = 0; j < 10; j++)
        {
            if (occupancy[i][j] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        cout << "Floor " << i + 1 << endl;
        cout << "Occupied Rooms: " << occupied << endl;
        cout << "Vacant Rooms: " << vacant << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}
