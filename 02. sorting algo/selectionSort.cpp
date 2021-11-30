#include <iostream>

using namespace std;

void sortTheArray(int arr[], int n)
{
    // selection sort a amara array ar akta akta element dorbo
    // then oita shoho check korbo tar porar kon element sob caya coto..
    // jai element select kora hoyca.. oitar thaka jodi coto element ar por thake
    // tahole amara oi element ar sate oi chto element ar position swap kore debo
    // aibabe n-2 times loop chalaila amadar array sorted hoya jabe.
    for (int index = 0; index < n - 1; index++)
    {
        int minimum = index;
        for (int i = index; i < n; i++)
        {
            if (arr[minimum] > arr[i])
            {
                minimum = i;
            }
        }
        swap(arr[minimum], arr[index]);
    }
}

int main()
{
    int arr[] = {200, 1, 9, 5, 6, 100};
    int n = sizeof(arr) / sizeof(int);

    sortTheArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }

    cout << endl;
    return 0;
}