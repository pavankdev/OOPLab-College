/*Name - Pawan Chondhe
Roll no - C02022
File Handling (Student Details)
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string studName;
    int studAge, studRoll;

    // Open file in write mode
    ofstream outFile("student.txt");
    if (outFile.is_open())
    {
        cout << "Enter Student Name: ";
        getline(cin, studName);
        cout << "Enter Age: ";
        cin >> studAge;
        cout << "Enter Roll Number: ";
        cin >> studRoll;

        // Write data into file
        outFile << "Student Details" << endl;
        outFile << "Name: " << studName << endl;
        outFile << "Age: " << studAge << endl;
        outFile << "Roll Number: " << studRoll << endl;
        outFile.close();

        cout << "\nData written successfully!" << endl;
    }
    else
    {
        cout << "Error: File cannot be opened for writing!";
        return 1;
    }

    // Open file in read mode
    ifstream inFile("student.txt");
    if (inFile.is_open())
    {
        string recordLine;
        cout << "\nStudent Details:\n";
        while (getline(inFile, recordLine))
        {
            cout << recordLine << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "Error: File cannot be opened for reading!";
        return 1;
    }

    return 0;
}

/*
OUTPUT:
Enter Student Name: Pawan Chondhe
Enter Age: 19
Enter Roll Number: 22

Data written successfully!

Student Details:
Student Details
Name: Pawan Chondhe
Age: 19
Roll Number: 22
*/