#include<iostream>
using namespace std;


// Syntax for initialization list in constructor :
// constructor (arguement-list)  : initialization-section {


// }
class Text{
    int a, b ;
    public : 
    Text(int i , int  j ) : a(i) , b(j){

        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};


int main(){
    Text x(50,79);
    
    return 0;
};