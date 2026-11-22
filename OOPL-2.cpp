/*Name - Pawan Chondhe
Roll no - C02022
Bank Account Management System
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount
{
private:
    int accNum;
    string holderName;
    double balance;
    string accType;

    // Static variable to count total accounts
    static int accountCount;

public:
    // Default Constructor
    BankAccount()
    {
        accNum = 0;
        holderName = "Not Available";
        balance = 0.0;
        accType = "Savings";
        accountCount++;
    }

    // Parameterized Constructor
    BankAccount(int num, string name, double bal, string type)
    {
        this->accNum = num;
        this->holderName = name;
        this->balance = bal;
        this->accType = type;
        accountCount++;
    }

    // Function to enter account details
    void enterDetails()
    {
        cout << "\nEnter Account Number: ";
        cin >> accNum;
        cout << "Enter Account Holder Name: ";
        cin.ignore();
        getline(cin, holderName);
        cout << "Enter Account Balance: ";
        cin >> balance;
        cout << "Enter Account Type (Savings/Current): ";
        cin >> accType;
    }

    // Function to display account information
    void displayDetails()
    {
        cout << "\n--------------------";
        cout << "\nAccount Number : " << accNum;
        cout << "\nAccount Holder : " << holderName;
        cout << "\nAccount Balance: Rs. " << fixed << setprecision(2) << balance;
        cout << "\nAccount Type   : " << accType;
        cout << "\n--------------------";
    }

    // Inline function to calculate interest
    inline double calculateInterest(double interestRate)
    {
        return (balance * interestRate) / 100;
    }

    // Inline function to calculate updated balance
    inline double updatedBalance(double interestRate)
    {
        return balance + calculateInterest(interestRate);
    }

    // Static function to display total accounts
    static void displayTotalAccounts()
    {
        cout << "\nTotal Number of Accounts Created: " << accountCount << endl;
    }

    // Friend function declaration
    friend void compareBalance(BankAccount, BankAccount);

    // Destructor
    ~BankAccount()
    {
        cout << "\nAccount object destroyed.";
    }
};

// Definition of static data member
int BankAccount::accountCount = 0;

// Friend function to compare balances of two accounts
void compareBalance(BankAccount a1, BankAccount a2)
{
    cout << "\n\n========== Balance Comparison ==========";
    if (a1.balance > a2.balance)
    {
        cout << "\nAccount " << a1.accNum << " has higher balance.";
    }
    else if (a2.balance > a1.balance)
    {
        cout << "\nAccount " << a2.accNum << " has higher balance.";
    }
    else
    {
        cout << "\nBoth accounts have the same balance.";
    }
}

int main()
{
    int numAccounts;
    cout << "===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n";
    cout << "\nEnter number of accounts: ";
    cin >> numAccounts;

    // Array of objects
    BankAccount accList[numAccounts];

    // Enter account details
    for (int idx = 0; idx < numAccounts; idx++)
    {
        cout << "\n\nEnter details for Account " << idx + 1;
        accList[idx].enterDetails();
    }

    // Display account information
    cout << "\n\n========== ACCOUNT DETAILS ==========";
    for (int idx = 0; idx < numAccounts; idx++)
    {
        accList[idx].displayDetails();
    }

    // Display total number of accounts
    BankAccount::displayTotalAccounts();

    // Calculate interest for first account
    double interestRate;
    cout << "\n\nEnter interest rate for Account 1 (%): ";
    cin >> interestRate;
    cout << "\nInterest Amount: Rs. " << accList[0].calculateInterest(interestRate);
    cout << "\nUpdated Balance: Rs. " << accList[0].updatedBalance(interestRate);

    // Compare balances of first two accounts
    if (numAccounts >= 2)
    {
        compareBalance(accList[0], accList[1]);
    }
    else
    {
        cout << "\n\nAt least two accounts are required for balance comparison.";
    }

    cout << "\n\n===== END OF PROGRAM =====\n";
    return 0;
}

/*
OUTPUT:
===== BANK ACCOUNT MANAGEMENT SYSTEM =====

Enter number of accounts: 2

Enter details for Account 1
Enter Account Number: 500101
Enter Account Holder Name: Rohan Deshmukh
Enter Account Balance: 45000
Enter Account Type (Savings/Current): Savings

Enter details for Account 2
Enter Account Number: 500102
Enter Account Holder Name: Sneha Patil
Enter Account Balance: 82500
Enter Account Type (Savings/Current): Current

========== ACCOUNT DETAILS ==========
--------------------
Account Number : 500101
Account Holder : Rohan Deshmukh
Account Balance: Rs. 45000.00
Account Type   : Savings
--------------------
--------------------
Account Number : 500102
Account Holder : Sneha Patil
Account Balance: Rs. 82500.00
Account Type   : Current
--------------------
Total Number of Accounts Created: 2

Enter interest rate for Account 1 (%): 5
Interest Amount: Rs. 2250.00
Updated Balance: Rs. 47250.00

========== Balance Comparison ==========
Account 500102 has higher balance.

===== END OF PROGRAM =====
Account object destroyed.
Account object destroyed.
*/