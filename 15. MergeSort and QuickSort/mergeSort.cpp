#include <iostream>

using namespace std;

void margeArrays(int x[], int y[], int a[], int s, int e)
{
    int mid = (e + s) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;

    while (i <= mid && j <= e)
    {
        if (x[i] < y[j])
        {
            a[k] = x[i];
            i++;
            k++;
        }
        else
        {
            a[k] = y[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        a[k] = x[i];
        k++;
        i++;
    }
}

void margeSort(int a[], int s, int e)
{

    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    int x[100], y[100];
    for (int i = 0; i <= mid; i++)
    {
        x[i] = a[i];
    }

    for (int i = mid + 1; i <= e; i++)
    {
        y[i] = a[i];
    }

    margeSort(x, s, mid);
    margeSort(y, mid + 1, e);

    margeArrays(x, y, a, s, e);
}

int main()
{

    int arr[] = {3, 4, 1, 2};

    margeSort(arr, 0, 3);

    for (int a : arr)
    {
        cout << a << endl;
    }

    return 0;
}