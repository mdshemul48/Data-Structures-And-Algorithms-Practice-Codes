#include <iostream>

using namespace std;

void printArray(int *arr, int n)
{
    // main thaka jokhon printArray ta array pass kora hoyca tokon full array
    // pass hoy na just array ar address pass hoy.. jaita main ar moda jai array ase oitaka point kore..
    // ar jono jokhon amara ai function ar moda sizeof(array) dy tokhon just pointer ar size ase. jaita 8bytes;
    // ar jonoi amadar array ar size function a params hisab a deya deya lage.

    // this will print 8.because this is not an
    // array it the memory address of the array.
    //  sizeof(pointer) = 8 bytes
    cout << "in function" << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int); // length of the arr

    cout << "in main" << sizeof(arr) << endl; // this will print 20 = 5 * int(4)

    printArray(arr, n);
    return 0;
}