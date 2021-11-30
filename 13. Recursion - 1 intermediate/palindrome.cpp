#include <bits/stdc++.h>

using namespace std;

// with loop
bool palindromWithLoop(int arr[], int s, int e)
{

    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

// with recartion
bool palindromWithRecartion(int arr[], int s, int e)
{
    if (e < s)
    {
        return true;
    }

    if (arr[s] != arr[e])
    {
        return false;
    }
    
    return palindromWithRecartion(arr, s + 1, e - 1);
}

int main()
{
    int arr[] = {1, 2, 33, 2, 2};
    bool result = palindromWithLoop(arr, 0, sizeof(arr) / sizeof(int) - 1);
    bool result2 = palindromWithRecartion(arr, 0, sizeof(arr) / sizeof(int) - 1);
    cout << result << endl;
    cout << result2 << endl;
    return 0;
}