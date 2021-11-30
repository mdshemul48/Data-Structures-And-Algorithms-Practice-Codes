#include <iostream>

using namespace std;

int main()
{
    char a[100];

    char a[100] = {'a', 'b', 'c'}; // wrong

    char a[100] = {'a', 'b', 'c', '\0'}; // right
    // \0 is tarminaton char >-----^
    // aitar mane char sas.

    char a[100] = "abc";
    // aibabe char array declare korla
    // automatic last a null char add kore dy.

    return 0;
}