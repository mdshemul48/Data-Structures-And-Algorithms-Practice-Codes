#include <bits/stdc++.h>

using namespace std;

int lengthOfCharArr(char arr[])
{
    if (arr[0] == '\0')
    {
        return 0;
    }
    return 1 + lengthOfCharArr(arr + 1);
}

int main()
{
    char arr[] = "hello world";
    cout << lengthOfCharArr(arr) << endl;
    return 0;
}