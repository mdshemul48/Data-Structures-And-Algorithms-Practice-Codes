#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[s] <= arr[mid])
        {
            if (key >= arr[s] && key <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (key >= arr[mid] && key <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    cout << binarySearch(arr, 5) << endl;

    return 0;
}