#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int fibo2(int n, int arr[])
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    if (arr[n] != 0)
    {
        return arr[n];
    }

    int output = fibo2(n - 1, arr) + fibo2(n - 2, arr);
    return output;
}

int fibo3(int n)
{
    int *arr = new int(n + 1);
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << "gfgg" << endl;
    int output = arr[n];
    return output;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo3(n) << endl;
    return 0;
}