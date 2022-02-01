#include <iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void perf_operations()
    {

 cout << "The value of A + B is " << (a + b) << endl;
        cout << "The value of A - B is " << (a - b) << endl;
        cout << "The value of A * B is " << (a * b) << endl;
        cout << "The value of A / B is " << (a / b) << endl;
        
}
};

class ScientificCalculator
{

 int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void perf_operations()
    {

        
        cout << "The value of Cos(a) is " << cos(a) << endl;
        cout << "The value of Sin(a) is " <<sin(a) << endl;
        cout << "The value of Exp(a) is " << exp(a) << endl;
        cout << "The value of Tan(a) is " << tan(a) << endl;
    }
    


};

int main()
{
    ScientificCalculator pro;
    pro.getData();
    pro.perf_operations();

    return 0;
};
