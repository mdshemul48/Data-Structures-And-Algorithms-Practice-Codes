#include <bits/stdc++.h>
using namespace std;

void kSmallest(int *a, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq(a, a + n);

    for (int i = 0; i <= k; i++)
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}

int main()
{

    return 0;
}