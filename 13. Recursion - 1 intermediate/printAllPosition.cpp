#include <bits/stdc++.h>

using namespace std;

void printAllPosition(int arr[], int n, int i, int k)
{
    if (n == i)
    {
        return;
    }

    if (arr[i] == k)
    {
        cout << i << endl;
    }

    printAllPosition(arr, n, i + 1, k);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 5, 3, 5};
    int n = sizeof(arr) / sizeof(int);
    printAllPosition(arr, n, 0, 5);
    return 0;
}