#include <bits/stdc++.h>

using namespace std;

int sumOfNumber(int n)
{
    if (n == 0)
    {
        return 0;
    }
    // aikane n/10 deya lastar akta number bad deya hoytaca..
    int subSum = sumOfNumber(n / 10);
    //
    // aikane n%10 deya last ar akta number neya jog kora hoytaca..
    int sum = subSum + (n % 10);
    return sum;
}

int main()
{
    int numbers = 12345;
    cout << sumOfNumber(numbers) << endl;
    return 0;
}