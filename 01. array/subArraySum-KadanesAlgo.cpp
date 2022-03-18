#include <iostream>

using namespace std;

/* 
            Kadanes algo
    aitate amara sub array ar largest sum bar kortaci..
    ai algo ta amara 2 ta variable create kore.. 
    then  akta loop ar moda curent element ar value ar sate currentSum 
    variable ar value jog kori.. aita jodi negative a cole jy tahole 
    currentSum ar value 0 kore debo.. ar jodi aita largest number thaka boro hoy
    tahole largest number ar sate aitaka replace kore debo..  
    aitar time complexity O(n) and space complexity O(1)     

*/

void printSubArrayLargestSum(int arr[], int n)

{
    int currentSum = 0;
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }

        largestSum = max(currentSum, largestSum);
    }
    cout << largestSum << endl;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    printSubArrayLargestSum(arr, n);
    return 0;
}