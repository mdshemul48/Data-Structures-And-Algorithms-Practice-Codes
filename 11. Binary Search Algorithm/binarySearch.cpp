#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr, int value)
{
    int start = 0;
    int end = arr.size();
    while (start <= end)
    {
        int middle = start + (end - start) / 2;

        if (arr[middle] == value)
        {
            return middle;
        }
        else if (arr[middle] > value)
        {
            end = middle;
        }
        else if (arr[middle] < value)
        {
            start = middle + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 34, 45, 645, 3432};

    int index = binarySearch(arr, 645);

    cout << index << endl;
    return 0;
}