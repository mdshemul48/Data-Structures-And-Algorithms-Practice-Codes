#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// vector holo dynamic array
// aita automatic size baraya nete pare jokhon dorkar.

// benifit of vector
// 1. size deya dorlar pore na.. akai size barai nete pare dorkar porla.
// 2. no limit for pushing element.
int main()
{
    // -----> vector create korar opay.

    // vector type variable_name
    vector<int> v;

    vector<int> *xp = new vector<int>(); // dynamic vector
    // dynamic vector amadar delete korte hobe.. aita akai remove hobe na..
    // but static vector akai delete hoyte pare. jokhon ar scope sas hoya jabe.

    // add element to the vector || push_back array ar last a akta element add kore dy.
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // replaceing vector element. || we should use push_back function for adding new item.
    // never use [] to insert elements in vector.
    v[1] = 100;

    // accessing vector data with index
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;

    // aikane fist a index check korba then value return korba..
    // but normal [] use korla kono error throw korba na.. and error o show korba na..
    // tai aita use kora best.
    cout << v.at(1) << endl;
    cout << v.at(6) << endl;

    // delete from back
    v.pop_back();

    for (int element : v)
    {
        cout << element << endl;
    }

    v.size(); // returns the size of the array

    // jokhon amadar element 1 ta thake tokhon amadar capacity thake  1 aita potak bar capacity full hoyla
    // abar capacity 2x hoya jai..
    v.capacity();

    // sort vector // aita amadar vector ka sort kore deba.
    sort(v.begin(), v.end());

    return 0;
}