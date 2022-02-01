#include <iostream>
using namespace std;

// Base class
class Employee
{

    float salary;

public:
    int id;
    Employee(int inpID)
    {
        id = inpID;
        salary = 34;
    }
    Employee(){};
};

// Derived class
// Default visibility mode is private
class Programmer : public Employee
{
public:
    Programmer(int inpID)
    {
        id = inpID;
    };
    int languagecode = 9;
};
int main()
{
    Employee satpreet(07), amrit(05);

    cout << "The id of Satpreet is " << satpreet.id << endl;
    cout << "The id of Amrit  is " << amrit.id << endl;
    Programmer sharan(786);
    cout << "The Employee id of Sharan is " << sharan.id << endl;
    return 0;
};
