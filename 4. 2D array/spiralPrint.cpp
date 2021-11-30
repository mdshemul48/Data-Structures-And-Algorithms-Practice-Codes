#include <iostream>

using namespace std;
void print(int arr[][4], int n, int m)
{
    int startRow = 0;
    int endRow = n - 1;

    int startCol = 0;
    int endCol = m - 1;

    while (startCol <= endCol and startRow <= endRow)
    {
        // start row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col];
        }

        // end col
        for (int row = startRow + 1; row <= endRow; row++)
        {
            cout << arr[row][endCol];
        }

        // end Row
        for (int col = endCol - 1; col >= startCol; col--)
        {
            cout << arr[endRow][col];
        }

        // start col
        for (int row = endRow - 1; row >= startRow + 1; row--)
        {
            cout << arr[row][startCol];
        }

        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    int arr[][4] = {{
                        1,
                        2,
                        3,
                        4,
                    },
                    {12, 13, 14, 5},
                    {11, 16, 15, 6},
                    {10, 9, 8, 7}};
    int n = 4, m = 4;

    print(arr, n, m);
    return 0;
}