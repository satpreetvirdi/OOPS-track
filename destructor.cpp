#include <iostream>
using namespace std;
int count = 0;
class num
{

public:
    num()
    {
        count++;
        cout << "The number of times constructor is called " << count << endl;
    }
    // Creating a destructors
    ~num()
    {
        cout << "Destructor is called for obeject number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function " << endl;
    cout << "Creating first object n1 " << endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating wo more objects "<<endl;
        num n2 , n3 ;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main "<<endl;
    return 0;
}