#include <bits/stdc++.h>

using namespace std;

void replaceChar(char arr[], char k, char x)
{
    if (arr[0] == '\0')
        return;

    if (arr[0] == k)
    {
        arr[0] = x;
    }
    replaceChar(arr + 1, k, x);
}

int main()
{
    char arr[] = "hello world";
    replaceChar(arr, 'l', 'G');
    for (char c : arr)
    {
        cout << c;
    }
    cout << endl;
    return 0;
}
