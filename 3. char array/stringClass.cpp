#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // cpp a 2 babe string use kore jai..
    // 1. char array 2. string
    // 1. char way::
    //              char s[1000] = {'1', 'a', 'b', 'c', '\0'}
    // 2. string::
    //            string s = "hello world"; // dynamic array
    // but 1 number ta recommended na.

    // getting input as string
    // string s;
    // getline(cin, s);
    // cout << s << endl;

    // string with vector :- getting multiple string
    // and storing in vector array.
    int n = 5;
    vector<string> str;
    string temp;
    while (n--)
    {
        getline(cin, temp);
        str.push_back(temp);
    }
    for (string st : str)
    {
        cout << st << endl;
    }

    return 0;
}