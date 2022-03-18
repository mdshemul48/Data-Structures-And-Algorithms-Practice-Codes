#include <iostream>
#include <vector>

using namespace std;

void print(const int arr[][3], int n)
{
    int startRow = 0;
    int endRow = n - 1;

    int startCol = 0;
    int endCol = n - 1;

    while (startCol <= endCol)
    {
        // top col
        for (int row = startRow; row <= endRow; row++)
        {

            cout << arr[startCol][row] << " ";
        }

        // end col
        for (int col = startCol + 1; col <= endCol; col++)
        {
            cout << arr[col][endRow] << " ";
        }

        for (int col = endCol - 1; col >= startCol; col--)
        {
            cout << arr[endRow][col] << " ";
        }

        for (int col = endCol - 1; col > startCol; col--)
        {
            cout << arr[col][startRow] << " ";
        }

        startCol++;
        endCol--;

        startRow++;
        endRow--;
    }
}

int main()
{
    int arr[][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};

    int n = 3;

    print(arr, n);
    return 0;
}