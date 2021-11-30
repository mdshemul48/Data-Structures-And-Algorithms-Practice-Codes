#include <bits/stdc++.h>

using namespace std;

void printAllThePermutation(char arr[], int i)
{
    if (arr[i] == '\0')
    {
        cout << arr << endl;
        return;
    }
    for (int j = i; arr[j] != '\0'; j++)
    {
        swap(arr[i], arr[j]);
        printAllThePermutation(arr, i + 1);
        swap(arr[i], arr[j]);
    }
}

int main()
{
    char arr[] = "ABC";
    printAllThePermutation(arr, 0);

    return 0;
}