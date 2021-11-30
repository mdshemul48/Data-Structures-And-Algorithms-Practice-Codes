#include <iostream>

using namespace std;
/* 
bubble sort a amara pasapasi thaka 2 ta element ka check 
kori konta boro and konta choto.. 

then jodi left side ar element right side ar element ar caya
boro hoy tahole amara left size ar element ka right a swap kore dy..

aita first time korar por amadar biggest element akdom right
side a chole jy.. 

tar por amara amadar inner loop ar  run time 1 kore komai dy.. 

karon oita akbar run hoyla akta akta kore element
 last a jaite thakba.. 




*/
void sortTheArray(int arr[], int n)
{
    for (int times = 1; times <= n - 1; times++)
    {
        for (int j = 0; j <= n - times - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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