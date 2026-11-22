/*Name - Pawan Chondhe
Roll no - C02022
Function Template (Selection Sort)
*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

template <typename T>
void sort(T arr[], int size)
{
    int minIdx;
    T swapVar;
    for (int i = 0; i < size - 1; i++)
    {
        minIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        if (minIdx != i)
        {
            swapVar = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = swapVar;
        }
    }

    cout << "sorted elements are ";
    for (int k = 0; k < size; k++)
    {
        cout << "\n" << arr[k];
    }
}

int main()
{
    int menuChoice;
    int intCount;
    int charCount;
    int floatCount;

    while (1)
    {
        cout << "\nmenu \n1.int sorting\n2.char sorting\n3.float sorting\n4.exit";
        cout << "\nEnter choice: ";
        cin >> menuChoice;

        switch (menuChoice)
        {
        case 1:
        {
            cout << "\nInteger sorting\n";
            cout << "\nEnter no of element to be sorted\n";
            cin >> intCount;
            int intArr[100];
            cout << "\nEnter element\n";
            for (int i = 0; i < intCount; i++)
            {
                cin >> intArr[i];
            }
            sort<int>(intArr, intCount);
            break;
        }
        case 2:
        {
            cout << "\ncharacter sorting\n";
            cout << "\nenter no of element to be sorted\n";
            cin >> charCount;
            char charArr[100];
            cout << "\nenter element\n";
            for (int i = 0; i < charCount; i++)
            {
                cin >> charArr[i];
            }
            sort<char>(charArr, charCount);
            break;
        }
        case 3:
        {
            cout << "\nfloating type sorting\n";
            cout << "\nenter no of element to be sorted\n";
            cin >> floatCount;
            float floatArr[100];
            cout << "\nenter element\n";
            for (int i = 0; i < floatCount; i++)
            {
                cin >> floatArr[i];
            }
            sort<float>(floatArr, floatCount);
            break;
        }
        case 4:
            exit(0);
        }
    }
    return 0;
}

/*
OUTPUT:
menu
1.int sorting
2.char sorting
3.float sorting
4.exit
Enter choice: 1

Integer sorting

Enter no of element to be sorted
4

Enter element
42
15
89
23
sorted elements are
15
23
42
89
*/
