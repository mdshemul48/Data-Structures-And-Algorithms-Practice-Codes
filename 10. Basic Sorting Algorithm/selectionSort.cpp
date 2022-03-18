#include <iostream>
#include <vector>

using namespace std;

// sorting amadar searching proccess fast kore dy.

vector<int> selectionSort(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int smallestNumber = arr[i];
        int smallestNumberIndex = i;
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] < smallestNumber)
            {
                    
                smallestNumber = arr[j];
                smallestNumberIndex = j;
            }
        }
        swap(arr[i], arr[smallestNumberIndex]);
    }
    return arr;
}

int main()
{
    vector<int> arr;
    arr = {7, 5, 3, 6, 8};

    vector<int> result = selectionSort(arr);

    for (int element : result)
    {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}