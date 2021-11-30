#include <iostream>

using namespace std;

int largestHourGlassSum(int arr[6][6], int r, int c)
{
    int result = 0;
    for (int row = 0; row <= 3; row++)
    {
        for (int col = 0; col <= 3; col++)
        {
            int sum = arr[row][col] + arr[row][col + 1] + arr[row][col + 2] + arr[row + 1][col + 1] + arr[row + 2][col] + arr[row + 2][col + 1] + arr[row + 2][col + 2];
            result = max(sum, result);
        }
    }
    return result;
}

int main()
{
    int sum[6][6] = {
        {1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 2, 4, 4, 0},
        {0, 0, 0, 2, 0, 0},
        {0, 0, 1, 2, 4, 0}};

    int result = largestHourGlassSum(sum, 6, 6);
    cout << result << endl;

    return 0;
}