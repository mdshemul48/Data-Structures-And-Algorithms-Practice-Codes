#include <iostream>
#include <algorithm> // aita akta buildin libary aitar moda sort type ar kecu funciton ase.

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n); // sorting array with assinding order.

    sort(arr, arr + n, compare); // amara akta compare function o pas korte pari
    // jaita use kore array ar element compare kora hobe.

    sort(arr, arr + n, greater<int>()); // greater is a build in function jaita
                                        // use kore array ar element compare kore sort korba.

    reverse(arr, arr + n); // amara sort korar por o array reverse korte pari.

    for (int x : arr)
    {
        cout << x << ",";
    }
    return 0;
}