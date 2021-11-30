#include <bits/stdc++.h>

using namespace std;

bool isElementPresnet(int arr[], int n, int k)
{
    bool result = arr[0] == k;

    if (n == 0 || result)
    {
        return result;
    }
    return isElementPresnet(arr + 1, n - 1, k);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7};

    bool result = isElementPresnet(arr, sizeof(arr) / sizeof(int), 5);

    cout << result << endl;
    return 0;
}