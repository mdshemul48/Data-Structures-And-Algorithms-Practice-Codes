#include <bits/stdc++.h>

using namespace std;

void removingDuplicate(char arr[])
{
    if (arr[0] == '\0')
    {
        return;
    }

    if (arr[0] == arr[1])
    {
        for (int i = 0; arr[i] != '\0'; i++)
        {
            arr[i] = arr[i + 1];
        }
        removingDuplicate(arr);
    }
    else
    {
        removingDuplicate(arr + 1);
    }
}

int main()
{
    char arr[] = "aaabbbccc";
    removingDuplicate(arr);
    cout << arr << endl;
    return 0;
}