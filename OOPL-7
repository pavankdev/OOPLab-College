/*Name - Pawan Chondhe
Roll no - C02022
User-Defined Exception Handling (Eligibility Check)
*/

#include <iostream>
#include <string>
using namespace std;

// User-defined exception class
class EligibilityException
{
public:
    string errMsg;
    EligibilityException(string msg)
    {
        errMsg = msg;
    }
};

int main()
{
    int userAge;
    double monthlyIncome;
    string userCity;
    char hasCar;

    cout << "Enter your age: ";
    cin >> userAge;
    cout << "Enter monthly income: ";
    cin >> monthlyIncome;
    cout << "Enter your city: ";
    cin >> userCity;
    cout << "Do you own a four-wheeler? (Y/N): ";
    cin >> hasCar;

    try
    {
        if (userAge < 18 || userAge > 55)
            throw EligibilityException("Age must be between 18 and 55 years.");

        if (monthlyIncome < 50000 || monthlyIncome > 100000)
            throw EligibilityException("Income must be between Rs. 50,000 and Rs. 1,00,000.");

        if (userCity != "Pune" && userCity != "Mumbai" && userCity != "Bangalore" && userCity != "Chennai")
            throw EligibilityException("City is not eligible.");

        if (hasCar != 'Y' && hasCar != 'y')
            throw EligibilityException("You must own a four-wheeler.");

        cout << "\nCongratulations! You are eligible." << endl;
    }
    catch (EligibilityException ex)
    {
        cout << "\nEligibility Error: " << ex.errMsg << endl;
    }

    return 0;
}

/*
OUTPUT:
Enter your age: 30
Enter monthly income: 85000
Enter your city: Bangalore
Do you own a four-wheeler? (Y/N): Y

Congratulations! You are eligible.
*/