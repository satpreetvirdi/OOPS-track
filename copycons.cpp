#include <iostream>
using namespace std;

class Number
{

    int a;

public:
    Number()
    {
        a = 0;
    };
    Number(int num)
    {
        a = num;
    }
// Copy Constructor
    Number (Number &obj){
        a = obj.a ;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number x1(x);
    x1.display();
    return 0;
};