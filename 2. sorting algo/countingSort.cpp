#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int arr[], int n)
{
    // aikane amarq check kortaci first a kon element ta sob caya boro.
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }
    // then amara element ar ar soman akta new array create korbo..
    // creating a count array
    // int *freq = new int[largest + 1];
    vector<int> freq(largest + 1);

    // tar por amara check kore akta oi index ar size jto jodi current element ar 2 array ta 1 bar thake
    // tahole amara index 2 ar value 1 kore debo. aibabe amara potak ta element ar freq increase korbo..
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // ar por amara check oi freq loop ar moda akta kata kore element check korbo and kon array ta value add korbo
    // and freq ar value komabo
    // aibabe element ar sob gula index ar element replace korbo..
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(arr) / sizeof(int);
    counting_sort(arr, n);

    for (int item : arr)
    {
        cout << item << ",";
    }
    cout << endl;
    return 0;
}