#include <bits/stdc++.h>

using namespace std;

int sumOfTheArr(int arr[], int n)
{
    // aikane amara first element raikha
    // baki element ka recartion kore assume kortaci ja baki element porar sum return korba..
    // then amara baki element ar sum ar sate + kore return kore debo..

    // base case
    if (n == 0)
    {
        return 0;
    }
    // recursion
    int sumOfSmallELement = sumOfTheArr(arr + 1, n - 1);

    // calculation
    return arr[0] + sumOfSmallELement;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << sumOfTheArr(arr, sizeof(arr) / sizeof(int)) << endl;

    return 0;
}