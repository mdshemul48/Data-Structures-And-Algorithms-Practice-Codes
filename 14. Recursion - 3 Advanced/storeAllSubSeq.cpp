#include <bits/stdc++.h>

using namespace std;

void allSubSeq(string input, string output, vector<string> &storage)
{
    if (input.length() == 0)
    {
        storage.push_back(output);
        return;
    }

    allSubSeq(input.substr(1), output + input[0], storage); // include
    allSubSeq(input.substr(1), output, storage);            // exclude
}

int main()
{
    string input, output;
    cin >> input;

    vector<string> storage;

    allSubSeq(input, output, storage);

    for (string i : storage)
    {
        cout << i << endl;
    }
    return 0;
}