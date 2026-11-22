/*Name - Pawan Chondhe
Roll no - C02022
Vehicle Rental System (Abstract Class & Runtime Polymorphism)
*/

#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class Vehicle
{
protected:
    string regNo;
    string make;
    double dailyRate;

public:
    // Constructor
    Vehicle(string num, string b, double rate)
    {
        regNo = num;
        make = b;
        dailyRate = rate;
    }

    // Pure Virtual Functions
    virtual void displayDetails() = 0;
    virtual double calculateRent(int rentalDays) = 0;

    // Virtual Destructor
    virtual ~Vehicle()
    {
        cout << "Vehicle destructor called." << endl;
    }
};

// Derived Class: Car
class Car : public Vehicle
{
    int seatsCount;

public:
    Car(string num, string b, double rate, int seats)
        : Vehicle(num, b, rate)
    {
        seatsCount = seats;
    }

    void displayDetails()
    {
        cout << "\n--- Car Details ---" << endl;
        cout << "Vehicle Number  : " << regNo << endl;
        cout << "Brand           : " << make << endl;
        cout << "Rent per Day    : Rs. " << dailyRate << endl;
        cout << "Seating Capacity: " << seatsCount << endl;
    }

    double calculateRent(int rentalDays)
    {
        return dailyRate * rentalDays;
    }

    ~Car()
    {
        cout << "Car destructor called." << endl;
    }
};

// Derived Class: Bike
class Bike : public Vehicle
{
    string category;

public:
    Bike(string num, string b, double rate, string type)
        : Vehicle(num, b, rate)
    {
        category = type;
    }

    void displayDetails()
    {
        cout << "\n--- Bike Details ---" << endl;
        cout << "Vehicle Number: " << regNo << endl;
        cout << "Brand         : " << make << endl;
        cout << "Rent per Day  : Rs. " << dailyRate << endl;
        cout << "Bike Type     : " << category << endl;
    }

    double calculateRent(int rentalDays)
    {
        return dailyRate * rentalDays;
    }

    ~Bike()
    {
        cout << "Bike destructor called." << endl;
    }
};

// Derived Class: Truck
class Truck : public Vehicle
{
    double maxLoad;

public:
    Truck(string num, string b, double rate, double load)
        : Vehicle(num, b, rate)
    {
        maxLoad = load;
    }

    void displayDetails()
    {
        cout << "\n--- Truck Details ---" << endl;
        cout << "Vehicle Number: " << regNo << endl;
        cout << "Brand         : " << make << endl;
        cout << "Rent per Day  : Rs. " << dailyRate << endl;
        cout << "Load Capacity : " << maxLoad << " tons" << endl;
    }

    double calculateRent(int rentalDays)
    {
        return dailyRate * rentalDays;
    }

    ~Truck()
    {
        cout << "Truck destructor called." << endl;
    }
};

int main()
{
    int rentalDays;
    cout << "===== VEHICLE RENTAL SYSTEM =====" << endl;
    cout << "\nEnter rental duration (in days): ";
    cin >> rentalDays;

    // Dynamic memory allocation using new
    Vehicle *veh1 = new Car("MH14CD5678", "Hyundai Creta", 3000, 5);
    Vehicle *veh2 = new Bike("MH14EF9012", "Yamaha R15", 1200, "Sports");
    Vehicle *veh3 = new Truck("MH14GH3456", "Ashok Leyland", 6000, 12);

    // Runtime Polymorphism
    veh1->displayDetails();
    cout << "Total Rent for " << rentalDays << " days: Rs. " << veh1->calculateRent(rentalDays) << endl;

    veh2->displayDetails();
    cout << "Total Rent for " << rentalDays << " days: Rs. " << veh2->calculateRent(rentalDays) << endl;

    veh3->displayDetails();
    cout << "Total Rent for " << rentalDays << " days: Rs. " << veh3->calculateRent(rentalDays) << endl;

    // Deallocation using delete
    delete veh1;
    delete veh2;
    delete veh3;

    cout << "\nAll vehicle objects deleted successfully." << endl;
    return 0;
}

/*
OUTPUT:
===== VEHICLE RENTAL SYSTEM =====

Enter rental duration (in days): 3

--- Car Details ---
Vehicle Number  : MH14CD5678
Brand           : Hyundai Creta
Rent per Day    : Rs. 3000
Seating Capacity: 5
Total Rent for 3 days: Rs. 9000

--- Bike Details ---
Vehicle Number: MH14EF9012
Brand         : Yamaha R15
Rent per Day  : Rs. 1200
Bike Type     : Sports
Total Rent for 3 days: Rs. 3600

--- Truck Details ---
Vehicle Number: MH14GH3456
Brand         : Ashok Leyland
Rent per Day  : Rs. 6000
Load Capacity : 12 tons
Total Rent for 3 days: Rs. 18000
Car destructor called.
Vehicle destructor called.
Bike destructor called.
Vehicle destructor called.
Truck destructor called.
Vehicle destructor called.

All vehicle objects deleted successfully.
*/