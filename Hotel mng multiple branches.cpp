
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Declare a three-dimensional array
    int chain[3][5][10];

    int totalOccupied = 0;

    // Initialize random number generator
    srand(time(0));

    // Assign random occupancy values
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                chain[i][j][k] = rand() % 2;

                // Count occupied rooms
                if (chain[i][j][k] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }

    // Display total occupied rooms
    cout << "\n======= HOTEL CHAIN REPORT =======" << endl;

    cout << "Total Branches: 3" << endl;
    cout << "Floors Per Branch: 5" << endl;
    cout << "Rooms Per Floor: 10" << endl;

    cout << "Total Occupied Rooms: " << totalOccupied << endl;

    cout << "==================================" << endl;

    return 0;
}
