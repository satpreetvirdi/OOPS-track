#include <iostream>
using namespace std;

class Student
{

protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a; 
    }
    void print_number()
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{

protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Marks scored in Maths are " << maths << endl;
        cout << "Marks scored in Physics are " << physics << endl;
    }
};

class Sports : virtual public Student
{

protected:
    float score;

public:
    void set_score(float a)
    {
        score = a;
    }
    void print_score(void)
    {
        cout << "Your PT Score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
    float total;

public:
    void display()
    {
        print_number();
        print_marks();
        print_score();
        total = maths + physics + score;
        cout << "Your Final Result is " << total << endl;
    }
};
int main()
{
    Result preet;
    preet.set_number(7070);

    preet.set_marks(89, 69);

    preet.set_score(93);

    preet.display();

    return 0;
};