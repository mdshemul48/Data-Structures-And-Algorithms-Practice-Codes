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

int main()
{
    cout << countSteps(2) << endl;
    return 0;
}