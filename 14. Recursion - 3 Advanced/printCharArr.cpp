#include <bits/stdc++.h>

using namespace std;

void printCharArr(char arr[])
{
    if (arr[0] == '\0')
    {
        return;
    }

    cout << arr[0] << " ";
    printCharArr(arr + 1);
}

void printCharArrInReverse(char arr[], int n)
{
    if (n == 0)
    {
        return;
    }

    printCharArrInReverse(arr + 1, n - 1);
    cout << arr[0] << " ";
}

int main()
{
    char arr[] = "abc";
    printCharArr(arr);
    cout << endl;
    printCharArrInReverse(arr, 3);
    return 0;
}