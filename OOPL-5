/*Name - Pawan Chondhe
Roll no - C02022
Complex Number Arithmetic (Operator Overloading)
*/

#include <iostream>
using namespace std;

class complex
{
public:
    float r, im;

    complex() {}

    complex operator+(complex);
    complex operator*(complex);
    friend ostream &operator<<(ostream &, complex &);
    friend istream &operator>>(istream &, complex &);
};

complex complex::operator+(complex obj)
{
    complex res;
    res.r = r + obj.r;
    res.im = im + obj.im;
    return res;
}

istream &operator>>(istream &inStream, complex &obj)
{
    inStream >> obj.r;
    inStream >> obj.im;
    return inStream;
}

ostream &operator<<(ostream &outStream, complex &obj)
{
    outStream << "" << obj.r;
    outStream << "+" << obj.im << "i";
    return outStream;
}

complex complex::operator*(complex obj)
{
    complex res;
    res.r = r * obj.r - im * obj.im;
    res.im = r * obj.im + im * obj.r;
    return res;
}

int main()
{
    int choice;
    char cont;
    complex c1, c2, sum, prod;

    do
    {
        cout << "\n\tArithmetic operations";
        cout << "\n\t1.Addition =";
        cout << "\n\t2.Multiplication =";
        cout << "\n Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n\tAddition ";
            cout << "\nEnter first complex number\n";
            cout << "\nEnter real and imaginary:\t";
            cin >> c1;
            cout << "Enter second complex number \n";
            cout << "\nEnter real and imaginary:\t";
            cin >> c2;
            sum = c1 + c2;
            cout << sum;
            break;

        case 2:
            cout << "\n\tMultiplication";
            cout << "\nEnter first complex number\n";
            cout << "\nEnter real and imaginary:\t";
            cin >> c1;
            cout << "Enter second complex number \n";
            cout << "\nEnter real and imaginary:\t";
            cin >> c2;
            prod = c1 * c2;
            cout << prod;
            break;
        }
        cout << endl;
        cout << "\n Do you want to go to main menu = ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    return 0;
}

/*
OUTPUT:
        Arithmetic operations
        1.Addition =
        2.Multiplication =
 Enter your choice: 1

        Addition
Enter first complex number
Enter real and imaginary: 4 3
Enter second complex number
Enter real and imaginary: 2 7
6+10i

 Do you want to go to main menu = n
*/