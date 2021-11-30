#include <bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n)
{
    // amara first function call a check kortaci ja
    // number amadar array ar first 2 ta number ke sorted nake..
    // then amara first element bad deya recartion ka baki function dorai detaci..
    // akhon recartion amadar return korba bake function ke sorted nake..

    // base case
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    bool isSmallerSorted = isSorted(arr + 1, n - 1);
    return isSmallerSorted;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << isSorted(arr, sizeof(arr) / sizeof(int)) << endl;
    return 0;
}