#include <iostream>

using namespace std;

// & deya amara ja kono variable ar memory address korte pari.
//

int main()
{
    int x = 10;
    // & means address of operator
    cout << &x << endl; // &x returns someting like 0x36a2bff6bc

    // we can create pointer variable using * and
    // use it on to store another variable address.
    //

    // define and assigning value to pointer.
    // int *xPointer;
    // xPointer = &x;

    int *xPointer = &x;
    cout << &xPointer << endl;

    // pointer to pointer

    int **xxpointer = &xPointer;
    cout << xxpointer << endl;

    return 0;
}