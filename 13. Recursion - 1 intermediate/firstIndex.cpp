#include <bits/stdc++.h>

using namespace std;

int findTheFirstIndex(int arr[], int i, int n, int k)
{
    if (n == i)
    {
        return -1;
    }

    if (arr[i] == k)
    {
        return i;
    }

    return findTheFirstIndex(arr, i + 1, n, k);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << findTheFirstIndex(arr, 0, sizeof(arr) / sizeof(int), 4) << endl;
    return 0;
}