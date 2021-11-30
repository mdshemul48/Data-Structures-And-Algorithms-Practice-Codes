#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        // aikane ami first a akta akta kore element dortaci..
        int current = arr[i];
        // prev item hesaba amara prev item dortaci..
        int prev = i - 1;

        // loop to find the right index where the element current should be inserted.
        // aikane amara prev item ar index check kortaci 0 ar thaka boro nake..
        // and dhaktaci current item ar prev item ke current item ar caya boro nake.
        while (prev >= 0 and arr[prev] > current)
        {
            // jodi prev item current item ar caya boro hoy
            // tahole current current item amadar temp variable a store kore
            // prev item ta current item ar jaigai move kore debo.
            arr[prev + 1] = arr[prev];

            // ar por amadar prev item ar value 1 kor komeya debo.. abar check korar
            // jono ja prev item ta ke current item ar boro nake..
            prev = prev - 1;
        }

        // ai item ar localtion paya joyar por amara just oi location a amadar
        // current item ta store kore debo..
        arr[prev + 1] = current;
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    insertion_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ",";
    }

    return 0;
}