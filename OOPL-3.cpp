/*Name - Pawan Chondhe
Roll no - C02022
Employee Bio-Data (Multiple & Virtual Inheritance)
*/

#include <iostream>
#include <string>
using namespace std;

// Virtual Base Class
class EmployeeInfo
{
protected:
    int employeeId;
    string empName;

public:
    void getInfo()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, empName);
    }

    void displayInfo()
    {
        cout << "\nEmployee ID: " << employeeId;
        cout << "\nName: " << empName;
    }
};

// Personal Record Class
class PersonalRecord : virtual public EmployeeInfo
{
protected:
    int empAge;
    string empGender, empAddress;

public:
    void getPersonal()
    {
        cout << "Enter Age: ";
        cin >> empAge;
        cin.ignore();
        cout << "Enter Gender: ";
        getline(cin, empGender);
        cout << "Enter Address: ";
        getline(cin, empAddress);
    }

    void displayPersonal()
    {
        cout << "\nAge: " << empAge;
        cout << "\nGender: " << empGender;
        cout << "\nAddress: " << empAddress;
    }
};

// Professional Record Class
class ProfessionalRecord : virtual public EmployeeInfo
{
protected:
    string role, orgName;
    float pay;

public:
    void getProfessional()
    {
        cout << "Enter Designation: ";
        getline(cin, role);
        cout << "Enter Company Name: ";
        getline(cin, orgName);
        cout << "Enter Salary: ";
        cin >> pay;
    }

    void displayProfessional()
    {
        cout << "\nDesignation: " << role;
        cout << "\nCompany: " << orgName;
        cout << "\nSalary: " << pay;
    }
};

// Academic Record Class
class AcademicRecord : virtual public EmployeeInfo
{
protected:
    string degree, univName;
    float score;

public:
    void getAcademic()
    {
        cin.ignore();
        cout << "Enter Qualification: ";
        getline(cin, degree);
        cout << "Enter University: ";
        getline(cin, univName);
        cout << "Enter Percentage: ";
        cin >> score;
    }

    void displayAcademic()
    {
        cout << "\nQualification: " << degree;
        cout << "\nUniversity: " << univName;
        cout << "\nPercentage: " << score << "%";
    }
};

// Derived Class using Multiple Inheritance
class Employee : public PersonalRecord,
                 public ProfessionalRecord,
                 public AcademicRecord
{
public:
    void acceptData()
    {
        cout << "\nEnter Employee Details\n";
        getInfo();
        getPersonal();
        getProfessional();
        getAcademic();
    }

    void displayData()
    {
        cout << "\n\n===== EMPLOYEE BIO-DATA =====";
        displayInfo();
        displayPersonal();
        displayProfessional();
        displayAcademic();
        cout << "\n============================";
    }
};

int main()
{
    Employee empObj;
    empObj.acceptData();
    empObj.displayData();
    return 0;
}

/*
OUTPUT:
Enter Employee Details
Enter Employee ID: 305
Enter Employee Name: Priya Kulkarni
Enter Age: 28
Enter Gender: Female
Enter Address: Mumbai
Enter Designation: Data Analyst
Enter Company Name: TCS
Enter Salary: 62000
Enter Qualification: B.Tech IT
Enter University: Mumbai University
Enter Percentage: 88.5

===== EMPLOYEE BIO-DATA =====
Employee ID: 305
Name: Priya Kulkarni
Age: 28
Gender: Female
Address: Mumbai
Designation: Data Analyst
Company: TCS
Salary: 62000
Qualification: B.Tech IT
University: Mumbai University
Percentage: 88.5%
============================
*/