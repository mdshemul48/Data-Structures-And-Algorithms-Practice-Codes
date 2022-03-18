#include <bits/stdc++.h>

using namespace std;

int stringToNumber(char arr[], int i)
{
    if (i == 0)
    {
        return 0;
    }

    int others = stringToNumber(arr, i - 1);
    int number = arr[i - 1] - '0';

    return (others * 10) + number;
}

int main()
{
    char numbers[] = "1234";
    cout << stringToNumber(numbers, 3) << endl;
    return 0;
}