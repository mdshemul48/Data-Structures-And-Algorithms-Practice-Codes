#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    // 1st Step ->  base case
    if (n == 0)
    {
        return 1;
    }

    int smallAns = fact(n - 1); // 2st Step -> assumption Recursive case

    int ans = n * smallAns; // 3st Step -> calculation

    return ans;
}

int main()
{
    // recursion runs on PMI =>  Principle of Mathematical Induction

    // 1. Prove F(0) or F(1) is true   ---> base case
    // 2. Induction Hypothesis Assume -> (don't question it. just assume)
    // 3. Induction Step   -> using step 2, prove F(k+1) is true

    cout << fact(4) << endl;

    return 0;
}