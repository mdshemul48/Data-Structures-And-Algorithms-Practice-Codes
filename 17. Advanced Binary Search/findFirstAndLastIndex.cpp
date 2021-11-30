#include <bits/stdc++.h>

using namespace std;

int getFirst(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int getLast(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 5, 6, 7};

    int f = getFirst(arr, 3);
    cout << f << endl;
    int l = getLast(arr, 3);
    cout << l << endl;

    return 0;
}