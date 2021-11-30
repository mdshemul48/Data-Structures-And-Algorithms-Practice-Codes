#include <bits/stdc++.h>

using namespace std;

int fibo(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return n;
    }

    // recursive case
    int smallOutput1 = fibo(n - 1);
    int smallOutput2 = fibo(n - 2);

    // calculation
    return smallOutput1 + smallOutput2;
}

int main()
{
    cout << fibo(3 ) << endl;
    return 0;
}