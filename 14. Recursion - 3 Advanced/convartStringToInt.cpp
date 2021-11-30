#include <bits/stdc++.h>

using namespace std;

int stringToInt(char number[], int n)
{
    if (n == 0)
    {
        return number[n] - '0';
    }

    int others = stringToInt(number, n - 1);
    int ans = number[n] - '0';

    return ans + (others * 10);
}

int main()
{
    char numberAsString[] = "123";
    cout << stringToInt(numberAsString, 2) << endl;
    return 0;
}