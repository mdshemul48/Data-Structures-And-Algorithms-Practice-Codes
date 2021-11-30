#include <bits/stdc++.h>

using namespace std;

int multiplication(int m, int n)
{
    if (n == 1)
    {
        return m;
    }
    return m + multiplication(m, n - 1);
}

int main()
{
    int m = 5;
    int n = 10;
    cout << multiplication(5, 3) << endl;
    return 0;
}