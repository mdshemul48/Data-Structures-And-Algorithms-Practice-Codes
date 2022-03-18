#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> *vp = new vector<int>(); // dynamic vector // it's mean we have to delete element by ourself. it will not delete automatic.
    vector<int> v;                       // static vector // this will delete itself automatic..

    vector<int> v(10, -2); // this will have capacity of 10 and -2

    v.push_back(10); // adding at back.
    cout << v[0] << endl;
    v[0] = 100;
    cout << v[0] << endl; // this will print garbage value if index not available.

    cout << v.at(0) << endl; // at  checks if index exist or not.

    return 0;
}