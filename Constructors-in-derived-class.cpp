#include <iostream>
using namespace std;

class Base1
{

    int data;

public:
    Base1(int i)
    {
        data = i;
        cout << "Base class constructor called " << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of Data is " << data << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base class constructor called " << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of Data is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {

        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printData(void)
    {
        cout << "The value of Data is " << derived1 << endl;
         cout << "The value of Data is " << derived2 << endl;
    }
};

int main()
{
Derived preet(1,2,3,4);
preet.printDataBase1();
preet.printDataBase2();
preet.printData();
    return 0;
};
