#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "abcdeghi";
    cout << a << endl;
    // strlen function returns length of char array.
    // strlen returns us number of visible char.
    cout << strlen(a) << endl;

    // sizeof returns +1 because of null char.
    cout << sizeof(a) << endl;
    return 0;
}