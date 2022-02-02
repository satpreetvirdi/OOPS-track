#include <iostream>
using namespace std;

class Complex
{

    int real, imaginary;

public:
    void getData()
    {

        cout << "The real part is " << real << endl;
        cout << "The real part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {

        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // Pointer(ptr) store kr rha hai address to object (c1)
    ptr->setData(1, 51);
   ptr->getData();

//    Array of objects
Complex *ptr1 = new Complex[3];
ptr1->setData(1, 51);
   ptr1->getData();


    return 0;
}