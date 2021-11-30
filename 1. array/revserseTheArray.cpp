#include <iostream>

using namespace std;

void reverseTheArray(int *arr, int n)
{

    //  aiken amara fist ar index and last ar index select korci.. s(fist) || e(last)
    // akhon amara check kortaci ja s ke e thaka boro ba soman hoyca nake..
    // jodi s >= e hoy tahole amara loop a swap kora off kore debo..
    // else amara s index element ka e index ar element ar sate swap kore debo..
    // aibabe korte korte jokhon s==e or s>e hobe tokhon aamra loop stop kore debo.. karon amara tokhon array ar middle a chole asci.. and middle ar element ka swap kora jabe na.. karon oita swap korlao middle a thakba

    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{
    int arr[] = {5, 32, 23, 423, 523};
    int n = sizeof(arr) / sizeof(int);

    reverseTheArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}