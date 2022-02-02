#include<iostream>
using namespace std;

// Aim of Virtual Functions ?
// You can access member functions of derived class with the use of pointer of base class pointing to derived class object


class BaseClass{

    public :
    int var_base;
    virtual void display(){

        cout<<"Displaying the Base Class variable "<<var_base<<endl;

    }
};
class DerivedClass : public BaseClass{

    public :
    int derived= 456;
    void display(){
        cout<<"Displaying the Base Class variable "<<var_base<<endl;

        cout<<"Displaying the Derived Class variable "<<derived<<endl;
        
    }
};




int main(){

   BaseClass *baseclass_pointer;
   BaseClass obj_base;
   DerivedClass obj_Derived;
   baseclass_pointer = &obj_Derived ;
   baseclass_pointer->display() ;
   

    return 0;
}