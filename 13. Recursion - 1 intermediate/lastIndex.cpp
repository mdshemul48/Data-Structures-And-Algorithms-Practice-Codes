#include <bits/stdc++.h>

using namespace std;

int findTheLastIndex(int arr[], int n, int k)
{
    if (n < 0)
    {
        return -1;
    }

    if (arr[n] == k)
    {

        return n;
    }

    return findTheLastIndex(arr, n - 1, k);
}

int main()
{
    int arr[] = {
        3,
        1,
        3,
        2,
        4,
        5,
        6,
        5,
    };
    cout << findTheLastIndex(arr, sizeof(arr) / sizeof(int) - 1, 444 ) << endl;
    return 0;
}