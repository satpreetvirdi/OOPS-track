#include <iostream>
using namespace std;

int main()
{

    int a = 3;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;

    // new keyboard
    int *p = new int(40);
    cout << "The value at address p is " << *(p) << endl;

    // integer array
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    // delete [] arr;
    cout << " The value of arr[0] is " << arr[0] << endl;
    cout << " The value of arr[1] is " << arr[1] << endl;
    cout << " The value of arr[2] is " << arr[2] << endl;

    // Delete operator

    return 0;
};