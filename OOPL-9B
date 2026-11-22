/*Name - Pawan Chondhe
Roll no - C02022
STL Vector Operations (Item Records)
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Item
{
public:
    char itemName[10];
    int qty;
    int price;
    int itemCode;

    bool operator==(const Item &other)
    {
        if (itemCode == other.itemCode)
            return 1;
        return 0;
    }

    bool operator<(const Item &other)
    {
        if (itemCode < other.itemCode)
            return 1;
        return 0;
    }
};

vector<Item> itemList;
void print(Item &it);
void display();
void insert();
void search();
void dlt();

bool compare(const Item &a, const Item &b)
{
    return a.price < b.price;
}

void insert()
{
    Item it;
    cout << "\nEnter Item Name: ";
    cin >> it.itemName;
    cout << "\nEnter Item Quantity: ";
    cin >> it.qty;
    cout << "\nEnter Item Cost: ";
    cin >> it.price;
    cout << "\nEnter Item Code: ";
    cin >> it.itemCode;
    itemList.push_back(it);
}

void display()
{
    for_each(itemList.begin(), itemList.end(), print);
}

void print(Item &it)
{
    cout << "\n";
    cout << "\nItem Name: " << it.itemName;
    cout << "\nItem Quantity: " << it.qty;
    cout << "\nItem Cost: " << it.price;
    cout << "\nItem Code: " << it.itemCode;
}

void search()
{
    vector<Item>::iterator itr;
    Item it;
    cout << "\nEnter Item Code to search: ";
    cin >> it.itemCode;
    itr = find(itemList.begin(), itemList.end(), it);
    if (itr == itemList.end())
    {
        cout << "\nNot found.";
    }
    else
    {
        cout << "\nFound.";
    }
}

void dlt()
{
    vector<Item>::iterator itr;
    Item it;
    cout << "\nEnter Item Code to delete: ";
    cin >> it.itemCode;
    itr = find(itemList.begin(), itemList.end(), it);
    if (itr == itemList.end())
    {
        cout << "\nNot found.";
    }
    else
    {
        itemList.erase(itr);
        cout << "\nDeleted.";
    }
}

int main()
{
    int menuOpt;
    do
    {
        cout << "\n***** Menu *****";
        cout << "\n1.Insert";
        cout << "\n2.Display";
        cout << "\n3.Search";
        cout << "\n4.Sort";
        cout << "\n5.Delete";
        cout << "\n6.Exit";
        cout << "\nEnter your choice: ";
        cin >> menuOpt;

        switch (menuOpt)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            sort(itemList.begin(), itemList.end(), compare);
            cout << "\n\n Sorted on Cost";
            display();
            break;
        case 5:
            dlt();
            break;
        case 6:
            exit(0);
        }
    } while (menuOpt != 7);

    return 0;
}

/*
OUTPUT:
***** Menu *****
1.Insert
2.Display
3.Search
4.Sort
5.Delete
6.Exit
Enter your choice: 1
Enter Item Name: Notebook
Enter Item Quantity: 5
Enter Item Cost: 60
Enter Item Code: 101

***** Menu *****
1.Insert
2.Display
3.Search
4.Sort
5.Delete
6.Exit
Enter your choice: 2

Item Name: Notebook
Item Quantity: 5
Item Cost: 60
Item Code: 101

***** Menu *****
1.Insert
2.Display
3.Search
4.Sort
5.Delete
6.Exit
Enter your choice: 3
Enter Item Code to search: 101
Found.
*/