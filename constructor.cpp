#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int ,int ); // Constructors declaration
    void printNumber()
    {
        cout << "Complex Number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x ,int y)
{
    
    a = x;
    b = y;
};

int main()
{
    Complex c(5,7);
    c.printNumber();

    return 0;
};

// Properties of Constructors
//  1. It should be declared in the public section of class
//  2. They are automatically invoked when the object is created
//  3. They cannot return values and do not have any return types
//  4. We cannot refer to their address
