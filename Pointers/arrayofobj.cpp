#include <iostream>
using namespace std;

class Shop
{
    int id;
    int price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "The id is : " << id << endl;
        cout << "The price is : " << price << endl;
    }
};

int main()
{
    int size;
    cout << "Enter size : ";
    cin >> size;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p, q, i;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of item " << i + 1 << " : ";
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++; // incrementing the pointer for next value
    }

    // Printing the input in output
    cout << endl
         << "Printing the Output :-> " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of item : " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}


// MIHIRR42
