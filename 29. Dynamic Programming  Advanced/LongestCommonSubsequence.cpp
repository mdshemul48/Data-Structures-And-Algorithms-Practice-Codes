#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, int i, string s2, int j)
{
    if (i == s1.size() || j == s2.size())
    {
        return 0;
    }

    // matched
    if (s1[i] == s2[j])
    {
        return 1 + lcs(s1, i + 1, s2, j + 1);
    }

    return max(lcs(s1, i, s2, j + 1), lcs(s1, i + 1, s2, j));
}

int longestCommonSubsequence(string text1, string text2)
{
    return lcs(text1, 0, text2, 0);
}

int main()
{
    string t1 = "abcde";
    string t2 = "ace";
    cout << longestCommonSubsequence(t1, t2) << endl;
    return 0;
}