#include <iostream>

using namespace std;

int findIndex(int *arr, int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 0, 10, 11, 9, 8, 8, 7};
    int n = sizeof(arr) / sizeof(int);
    int key = 15;

    // LOOK FOR THE KEY INDEX
    int indexOf9 = findIndex(arr, n, key);
    cout << "element index: " << indexOf9 << endl;
    return 0;
}