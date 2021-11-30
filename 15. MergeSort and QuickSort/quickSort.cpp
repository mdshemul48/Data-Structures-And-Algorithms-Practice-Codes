#include <bits/stdc++.h>

using namespace std;

int partition(int a[], int s, int e)
{
    int i = s;
    int pivot = a[e];
    for (int j = s; j <= e - 1; j++)
    {
        if (a[j] < pivot)
        {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[e]);
    return i;
}

void quickSort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(a, s, e);

    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}

int main()
{
    int arr[] = {5, 1, 22, 3, 8, -5};
    int n = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}