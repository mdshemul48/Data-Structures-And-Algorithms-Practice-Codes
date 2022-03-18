#include <bits/stdc++.h>

using namespace std;

int stairCase(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }

    return stairCase(n - 1) + stairCase(n - 2) + stairCase(n - 3);
}

int main()
{
    int staircase = 4;
    cout << stairCase(staircase) << endl;
    return 0;
}