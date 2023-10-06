#include <iostream>
using namespace std;

class A
{
    int n;

public:
    void setData(int n)
    {
        // n=n;                // gives unknown address or value
        this->n = n; // this point to object  which invokes the member
    }

    void getData()
    {
        cout << "The value of n is " << n << endl;
    }
};

int main()
{
    A a;
    a.setData(24);
    a.getData();

    return 0;
}

// MIHIRR42
