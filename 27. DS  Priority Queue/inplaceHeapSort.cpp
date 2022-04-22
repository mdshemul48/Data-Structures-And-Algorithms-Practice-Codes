#include <bits/stdc++.h>
using namespace std;

void inplaceHeapSort(int *pq, int n)
{
    for (int i = 0; i < n; i++)
    {
        int ci = i;
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (pq[ci] < pq[pi])
            {
                swap(pq[ci], pq[pi]);
                ci = pi;
            }
            else
            {
                break;
            }
        }
    }

    // removing min n times

    int size = n;

    while (size >= 1)
    {
        swap(pq[0], pq[size - 1]);
        size--;

        int pi = 0;

        while (true)
        {
            int lci = 2 * pi + 1;
            int rci = 2 * pi + 2;
            int mini = pi;

            if (lci < size && pq[lci] < pq[mini])
            {
                mini = lci;
            }
            if (rci < size && pq[rci] < pq[mini])
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
    }
}

int main()
{
    int input[] = {5, 1, 2, 0, 8};

    inplaceHeapSort(input, 5);

    for (int i : input)
    {
        cout << i << endl;
    }

    return 0;
}