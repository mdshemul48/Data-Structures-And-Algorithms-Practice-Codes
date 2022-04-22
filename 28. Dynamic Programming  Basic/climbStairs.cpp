#include <bits/stdc++.h>
using namespace std;

int countSteps(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return countSteps(n - 1) + countSteps(n - 2);
}

// count steps dp
int halper(int n, int *arr)
{
    if (n == 0 || n == 1)
        return 1;

    return arr[n] = halper(n - 1, arr) + halper(n - 2, arr);
}

int countSteps2(int n)
{
    int *arr = new int[n + 1];

    return halper(n, arr);
}

// iterative and dp

int countStep3(int n)
{
    int *arr = new int[n + 1];
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main()
{
    cout << countSteps2(5) << endl;
    cout << countStep3(5) << endl;
    return 0;
} 