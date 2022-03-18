#include <bits/stdc++.h>
using namespace std;

int main()
{

    // aikane amara first a akta akta map create korci
    // then amara check korci ja oitai ke element ta agar theke exist ase nake.
    // jodi na thake tahole oita amara store a push kore then  arr2 a push korbo.
    // and jaigula thakba oigula just ignore korbo..

    vector<int> arr = {1, 2, 3, 2, 1, 5, 4, 1, 3};

    unordered_map<int, bool> store;

    vector<int> arr2;

    for (int i = 0; i < arr.size(); i++)
    {
        if (!store.count(arr[i]))
        {
            arr2.push_back(arr[i]);
            store[arr[i]] = true;
        }
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << endl;
    }

    return 0;
}