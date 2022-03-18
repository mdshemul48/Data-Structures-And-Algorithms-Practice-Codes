#include <bits/stdc++.h>

using namespace std;

int main()
{
    // string hoylo ak pokar data type
    // ata hoylo string create korar akta static way..
    string s = "hello world";
    cout << s << endl;

    // aikane amara dynamicly akta string create kortaci..
    // using pointer..

    string *sp = new string;
    *sp = "hello gg";
    cout << *sp << endl;

    // 2D array of string; with vector (dynamic array)
    vector<string> v;
    v.push_back(s);
    v.push_back("hello world");
    v.push_back("hello");

    for (string value : v)
        cout << value << endl;

    // taking input with space
    string s3;
    // getline(cin, s3);
    cout << s3 << endl;

    // we can change string character..
    s3 = "hello world";
    cout << s3[1] << endl;

    s3[0] = 'B';
    cout << s3 << endl;

    //we can concatenate string with another string..
    string s4 = s3 + s;
    cout << s4 << " " << endl;

    // string size || both returns same result
    cout << s4.size() << endl;
    cout << s4.length() << endl;

    // sub string returns all the char element
    // after the provided variable
    // aita provided index ar porar sob element gulaka return kore

    cout << s4.substr(18) << endl;

    // find /- aikane jodi world poya jai tahole
    // direct world ar w ar index return kore deba.
    const string gg = "hello world";
    cout << gg.find("world") << endl;

    // convarting number to string.
    string numbertoString = to_string(10101010);
    cout << numbertoString << endl;

    // convarting string to int
    // int numberFromString = atoi("101010");
    int numberFromString = atoi(numbertoString.c_str());
    cout << numberFromString << endl;
    return 0;
}