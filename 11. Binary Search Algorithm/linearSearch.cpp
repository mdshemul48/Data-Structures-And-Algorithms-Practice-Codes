#include <bits/stdc++.h>

using namespace std;

// problem of linear search..
// liner search akta array ta linearly kaj kore.. 
// jar jono amadar array ta sob item akta akta kore check korte hoy.
// jodi sorted array o hoy tahole o linearly kaj korba.. same babe.


void findTheElement(vector<int> arr, int element)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr.at(i) == element)
        {
            cout << "element found at : " << i << endl;
            return;
        }
    }
    cout << "element not found" << endl;
}

int main()
{
    vector<int> arr = {1, 2, 35, 64, 34};

    findTheElement(arr, 69);
    return 0;
}