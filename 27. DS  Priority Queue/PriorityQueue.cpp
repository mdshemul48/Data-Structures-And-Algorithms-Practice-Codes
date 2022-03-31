#include <bits/stdc++.h>
using namespace std;

// min heap

class PriorityQueue
{
    vector<int> pq;

public:
    PriorityQueue()
    {
    }

    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getMin()
    {
        if (isEmpty())
        {
            return 0;
        }

        return pq[0];
    }

    int getSize()
    {
        return pq.size();
    }

    void insert(int element)
    {
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (pq[childIndex] < pq[parentIndex])
            {
                swap(pq[childIndex], pq[parentIndex]);
                childIndex = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    int removeMin()
    {
        if (isEmpty())
        {
            return 0;
        }

        int ans = pq[0];

        swap(pq[0], pq[pq.size() - 1]);
        pq.pop_back();

        // CBT yes, Heap no
        // down heapify

        int pi = 0;

        while (true)
        {
            int lci = 2 * pi + 1;
            int rci = 2 * pi + 1;
            int mini = pi;

            if (lci < pq.size() && pq[lci] < pq[mini])
            {
                mini = lci;
            }

            if (rci < pq.size() && pq[rci] < pq[mini])
            {
                mini = rci;
            }

            if (mini == pi)
            {
                break;
            }

            swap(pq[pi], pq[mini]);
            pi = mini;
        }
        return ans;
    }
};

int main()
{
    PriorityQueue p;

    p.insert(100);
    p.insert(10);
    p.insert(15);
    p.insert(3);
    p.insert(17);
    p.insert(21);

    cout << p.getSize() << endl;

    cout << p.getMin() << endl;

    while (!p.isEmpty())
    {
        cout << p.removeMin() << " ";
    }
    return 0;
}