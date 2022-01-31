#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

// Derived Class from Base 1 and Base 2 
class Derived : public Base1, public Base2
{
public:
    void show()
    {

        cout << "The value of Base1 is  " << base1int << endl;
        cout << "The value of Base2 is  " << base2int << endl;
    }

};

int
main()
{
Derived d1;
d1.set_base1int(436346);
d1.set_base2int(643463);
d1.show();
    return 0;
}