#include <bits/stdc++.h>
using namespace std;

// with only recursion
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

//  with dp

int longestCommonSubsequence2(string text1, string text2)
{
    int m = text1.size();
    int n = text2.size();
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (text1[i] == text2[j])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

int main()
{
    string t1 = "abcde";
    string t2 = "ace";
    cout << longestCommonSubsequence2(t1, t2) << endl;
    return 0;
}