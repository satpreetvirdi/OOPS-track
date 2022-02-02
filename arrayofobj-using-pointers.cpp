#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main(){
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrItem = ptr; 
    // ptrItem point kr rha hai first object of ptr

    int i , p;
    float q;

    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the Id and Price of item "<< i+1<<endl ;
        cin>>p>>q;
         
         ptr->setData(p,q);
         ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number : "<<i+1<<endl;
        ptrItem->getData();
        ptrItem++;
    }
    
    

    return 0;
};