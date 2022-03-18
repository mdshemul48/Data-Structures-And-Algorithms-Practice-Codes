#include <bits/stdc++.h>

using namespace std;

int countZero(int number)
{
    if (number == 0)
    {
        return 0;
    }
    return number % 10 == 0 ? 1 + countZero(number / 10) : countZero(number / 10);
}

int main()
{
    cout << countZero(404040) << endl;
    return 0;
}