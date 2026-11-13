
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
    protected:
        string brand;
        int yearOfManufacture;

    public:

        // Function to display vehicle details
        void displayVehicle()
        {
            cout << "Brand: " << brand << endl;
            cout << "Year of Manufacture: " << yearOfManufacture << endl;
        }
};

// Derived class
class Car : public Vehicle
{
    private:
        int numberOfDoors;
        double engineCapacity;

    public:

        // Function to input car details
        void inputCar()
        {
            cout << "Enter vehicle brand: ";
            getline(cin, brand);

            cout << "Enter year of manufacture: ";
            cin >> yearOfManufacture;

            cout << "Enter number of doors: ";
            cin >> numberOfDoors;

            cout << "Enter engine capacity (CC): ";
            cin >> engineCapacity;
        }

        // Function to display car details
        void displayCar()
        {
            cout << "\n======= CAR DETAILS =======" << endl;

            // Display inherited vehicle details
            displayVehicle();

            cout << "Number of Doors: " << numberOfDoors << endl;
            cout << "Engine Capacity: " << engineCapacity << " CC" << endl;

            cout << "===========================" << endl;
        }
};

int main()
{
    // Create Car object
    Car car1;

    // Input car details
    car1.inputCar();

    // Display car details
    car1.displayCar();

    return 0;
}
