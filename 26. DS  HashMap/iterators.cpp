#include <bits/stdc++.h>
using namespace std;

int main()
{

    // unorder a elements kono serial onujai thake na.. first ba last a ja kono element aste pare.
    unordered_map<string, int> myMap;
    myMap["abc"] = 1;
    myMap["abc1"] = 2;
    myMap["abc2"] = 3;
    myMap["abc3"] = 4;
    myMap["abc4"] = 5;
    myMap["abc5"] = 6;
    myMap["abc6"] = 7;

    for (unordered_map<string, int>::iterator it = myMap.begin(); it != myMap.end(); it++)
    {
        cout << "key: " << it->first << " value: " << it->second << endl;
    }

    //
    map<string, int> myMap2;
    myMap2["abc"] = 1;
    myMap2["abc1"] = 2;
    myMap2["abc2"] = 3;
    myMap["abc3"] = 4;

    return 0;
}