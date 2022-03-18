#include <bits/stdc++.h>

using namespace std;

int pow(int x, int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive
    int smallAns = pow(x, n - 1);

    // calculation
    int sum = x * smallAns;
    return sum;
}

int main()
{
    cout << pow(5, 3) << endl;
    return 0;
}