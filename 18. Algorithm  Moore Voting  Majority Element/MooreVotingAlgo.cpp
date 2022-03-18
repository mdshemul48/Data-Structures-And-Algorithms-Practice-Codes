#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> arr)
{
    // aikane amara first element canidate element dore count kortaci ja
    // aitar porar element ke same nake jodi same hoy tahole count 1+ kore debo
    // ar jodi count same na hoy tahole 1- kore debo..
    // count multiply or subtract korar por jodi amadar count ar value 0 hoy..
    // tahole oi loop ar current element ka canidate dore and count 1 dore..
    // amara porar emenet check kora suru korbo..
    // last a amadar jai element ta thakba oita amadar majoroty element hobe.
    int canidate = arr[0];
    int count = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != canidate)
        {
            count--;
        }
        else
        {
            count++;
        }

        if (count == 0)
        {
            count = 1;
            canidate = arr[i];
        }
    }
    return canidate;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(arr) << endl;

    return 0;
}