#include <iostream>

using namespace std;

int main()
{
    char ch;
    ch = cin.get();

    int alpha = 0;
    int space = 0;
    int digit = 0;

    while (ch != '\n')
    {
        // aikane amara check kortaci char ta ke 0 thaka 9 ar unicode ar moda ase nake.
        if (ch > '0' and ch < '9')
        {
            digit++;
        }
        // aikane amara check kortaci char ta ke a-z ar moda ase nake..
        if (ch > 'a' and ch < 'z' or ch > 'A' and ch < 'Z')
        {
            alpha++;
        }
        // aikane amara check kortaci char ta ke space nake Tab..
        // (Tab o akdoronar space tai \t deya tab nake check kora jai)
        if (ch == ' ' or ch == '\t')
        {
            space++;
        }
        ch = cin.get();
    }

    cout << alpha << endl;
    cout << space << endl;
    cout << digit << endl;
    return 0;
}