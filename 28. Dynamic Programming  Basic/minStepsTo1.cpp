#include <bits/stdc++.h>
using namespace std;

// memorization with helper func
int helper(int num, int *arr)
{
    if (num == 1)
    {
        return 0;
    }

    if (arr[num] != -1)
    {
        return arr[num];
    }

    int x = helper(num - 1, arr);
    if (num % 2 == 0)
    {
        int j = helper(num / 2, arr);
        x = min(x, j);
    }

    if (num % 3 == 0)
    {
        int j = helper(num / 3, arr);
        x = min(j, x);
    }
    return arr[num] = x + 1;
}

int minSteps2(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }
}

// memorization ->DP
int minStepToOne(int num, vector<int> &arr)
{
    if (num == 1)
    {
        return 0;
    }

    if (arr[num] != -1)
    {
        return arr[num];
    }

    int x = minStepToOne(num - 1, arr);
    if (num % 2 == 0)
    {
        int j = minStepToOne(num / 2, arr);
        x = min(x, j);
    }

    if (num % 3 == 0)
    {
        int j = minStepToOne(num / 3, arr);
        x = min(j, x);
    }
    return arr[num] = x + 1;
}

int main()
{
    const int number = 11;
    cout << number << endl;
    vector<int> arr(1000, -1);

    cout << minStepToOne(number, arr) << endl;
    return 0;
}