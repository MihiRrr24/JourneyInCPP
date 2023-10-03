#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void setData(int x, int y)
    {
        real = x;
        imaginary = y;
    }

    void getData()
    {
        cout << "The real part is : " << real << endl;
        cout << "The imaginary part is : " << imaginary << endl;
    }
};

int main()
{
    Complex C1;
    Complex *ptr = &C1;            // ASSINGNING ADDRESS OF THE OBJECT TO POINTER

    // CALLING POINTER TO OBJECT
    // (*ptr).setData(2 , 4);
    // OR WE CAN USE ARROW OPERATOR
    ptr->setData(2, 4);
    ptr->getData();
    // (*ptr).getData();

    return 0;
}


// MIHIRR42
