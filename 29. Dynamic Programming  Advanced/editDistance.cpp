#include <bits/stdc++.h>
using namespace std;

int mD(string s1, int m, string s2, int n)
{
    if (m == 0)
    {
        return n;
    }

    if (n == 0)
    {
        return n;
    }

    if (s1[m - 1] == s2[n - 1])
    {
        return mD(s1, m - 1, s2, n - 1);
    }

    int i = mD(s1, m, s2, n - 1);

    int d = mD(s1, m - 1, s2, n);
    int r = mD(s1, m - 1, s2, n - 1);
}

int minDistance(string word1, string word2)
{
}

int main()
{

    return 0;
}