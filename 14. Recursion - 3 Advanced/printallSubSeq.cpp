#include <bits/stdc++.h>
using namespace std;
//             0,1,2
// problem :-> "abc"

void print_subs(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    print_subs(input.substr(1), output);
    print_subs(input.substr(1), output + input[0]);
}

void printSubWithChar(char input[], char output[], int i)
{
    if (input[0] == '\0')
    {
        output[i] = '\0';
        cout << output << endl;
        return;
    }
    output[i] = input[0];
    printSubWithChar(input + 1, output, i + 1);
    printSubWithChar(input + 1, output, i);
}

int main()
{
    string input;
    cin >> input;

    string output = "";
    print_subs(input, output);
    return 0;
}