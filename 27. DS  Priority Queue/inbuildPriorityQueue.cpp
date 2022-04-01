#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq2; // max heap

    priority_queue<int, vector<int>, greater<int>> pq; // min heap

    pq.push(5);
    pq.push(2);
    pq.push(4);
    pq.push(5);
    pq.push(63);

    cout << "Size: " << pq.size() << endl; // returns size

    cout << "root Element: " << pq.top() << endl; // returns max element

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}