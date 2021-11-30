#include <iostream>

using namespace std;

int binary_search(int arr[], int n, int key)
{
    // binary search sorted array ta kaj korte hoabe.
    // and array monotonic hoyte hobe.. mane non-increasing or non-decressing
    // aikane first a array ar middle a check kora hoyca ja array[middle] == key..
    // if array middle key hoy tahole aitai element.. ar jodi aita na hoy tahole dhakte hobe..
    // middle a thaka key jodi amadar key ar thaka boro hoy tahole buja jabe amadar key left pase ase..
    // tokon amara ending ka middle-1 kore debo.. akhon amadar kaca just left array ar part ase..
    // akhon amara abar middle a check korbo ja element == key nake..
    // jodi middle < key .. key middle element ar caya boro hoy tahole amara starting index = middle+1 kore debo..
    // tahole ar porar iteration a amra right paws ar element pabo.
    // aibabe code create korla amara ak somoy key ar position paya jabo.

    // implimentation of binary search
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(array) / sizeof(int);

    int key;
    cin >> key;

    int index = binary_search(array, n, key);

    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    }
    else
    {
        cout << key << "is NOT Found!" << endl;
    }

    return 0;
}