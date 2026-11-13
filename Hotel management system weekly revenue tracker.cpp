
#include <iostream>
using namespace std;

int main()
{
    // Declare a one-dimensional array
    double revenue[7];
    double totalRevenue = 0;
    double averageRevenue;

    // Input daily revenue
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter revenue for day " << i + 1 << ": Ksh ";
        cin >> revenue[i];

        totalRevenue = totalRevenue + revenue[i];
    }

    // Calculate average revenue
    averageRevenue = totalRevenue / 7;

    // Display weekly revenue report
    cout << "\n======= WEEKLY REVENUE REPORT =======" << endl;
    cout << "Total Weekly Revenue: Ksh " << totalRevenue << endl;
    cout << "Average Daily Revenue: Ksh " << averageRevenue << endl;
    cout << "=====================================" << endl;

    return 0;
}
