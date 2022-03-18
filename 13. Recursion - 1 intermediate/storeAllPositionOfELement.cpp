#include <bits/stdc++.h>

using namespace std;

void saveAllthePosition(int arr[], int n, int i, int k, vector<int> &ans)
{
    if (n == i)
    {
        return;
    }

    if (arr[i] == k)
    {
        ans.push_back(i);
    }

    saveAllthePosition(arr, n, i + 1, k, ans);
}

int main()
{
    vector<int> ans;

    int arr[] = {1, 2, 3, 4, 2, 5, 3, 5};
    int n = sizeof(arr) / sizeof(int);

    saveAllthePosition(arr, n, 0, 2, ans);

    for (int e : ans)
    {
        cout << e << endl;
    }

    return 0;
}