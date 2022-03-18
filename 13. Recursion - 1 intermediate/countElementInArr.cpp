#include <bits/stdc++.h>

using namespace std;

int countElement(int arr[], int n, int k)
{
    if (n == 0)
    {
        return 0;
    }
    return (arr[0] == k ? 1 : 0) + countElement(arr + 1, n - 1, k);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 5, 3, 5, 5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << countElement(arr, n, 5) << endl;
    return 0;
}