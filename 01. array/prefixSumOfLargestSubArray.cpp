#include <iostream>

using namespace std;
// problem: print largest subarrays sum
// prefix sum approach O(n^2)
void printSubArrayLargestSum(int arr[], int n)
{

    int prefix[100] = {0};
    prefix[0] = arr[0];

    int largestSum = 0;

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subArray = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largestSum = max(largestSum, subArray);
        }
    }
    cout << "largestSum: " << largestSum << endl;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    printSubArrayLargestSum(arr, n);

    return 0;
}