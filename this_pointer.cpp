#include <iostream>
using namespace std;


class A{

    int a ;
    public:
        void setData(int a){
         this->   a = a;
        }
        void displayData(){
            cout<<"The value of a is "<<a <<endl;
        }
};

int main(){

A a;
a.setData(65);
a.displayData();

    return 0;
}