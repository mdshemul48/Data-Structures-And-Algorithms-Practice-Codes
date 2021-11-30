#include <bits/stdc++.h>

using namespace std;

int toh(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return toh(n - 1) + 1 + toh(n - 1);
}

void printSeps(int n, char s, char d, char h)
{
    if (n == 0)
    {
        return;
    }
    printSeps(n - 1, s, h, d);
    cout << "Moving disk " << n << " from " << s << " to " << d << endl;
    printSeps(n - 1, h, d, s);
}

int main()
{

    // cout << toh(5) << endl;
    printSeps(5, 'A', 'C', 'B');
    return 0;
}