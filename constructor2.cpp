#include <iostream>
using namespace std; 

class BankDeposit {
      
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public :
    BankDeposit();
    BankDeposit(int p, int y, float r );
    BankDeposit(int p, int y, int r );
};
BankDeposit :: BankDeposit(int p , int y , float r){
      principal = p ;
      years =y ;
      interestRate = r;

      returnValue =0 ;
      for (int i = 0; i < y; i ++)
      {
          
      }
      
};