#include <iostream>
#include <vector>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair findMinMax(vector<int> arr)
{

    Pair value;
    if (arr[0] > arr[0 + 1])
    {
        value.max = arr[0];
        value.min = arr[0 + 1];
    }
    else
    {
        value.max = arr[0 + 1];
        value.min = arr[0];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        value.min = min(arr[i], value.min);
        value.max = max(arr[i], value.max);
    }
    return value;
}

int main()
{
    vector<int> arr = {1000, 11, 445,
                       1, 330, 3000};

    Pair result = findMinMax(arr);
    cout << result.max << endl;
    cout << result.min << endl;

    return 0;
}