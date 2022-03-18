#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> myMap;

    // first way to insert
    pair<string, int> p("abc", 1);
    myMap.insert(p);

    myMap["def"] = 2; // just like array

    // find or access element
    cout << myMap["abc"] << endl; // this will

    cout << myMap.at("abc") << endl; // this will throw error if element not in unordered map

    cout << myMap.count("abc") << endl; // this will count how many key present in the map.. if none present then return 0;
    // count func will return 2 thing. 0 and 1

    // update
    myMap["abc"] = 20;

    cout << myMap.size() << endl; // returns hash map size

    // delete
    myMap.erase("abc"); // this will delete the value and key from the hashTable

    return 0;
}