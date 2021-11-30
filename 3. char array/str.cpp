#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];
    // calc length
    cout << strlen(a) << endl;

    // this will copy a string to b
    // strcpy(dist, src)
    strcpy(b, a);

    // compare
    // if 2 str same it will return 0
    cout << strcmp(b, a) << endl;

    // concatenate
    // marging 2 string
    char web[] = "www";
    char domain[] = "codding.com";

    cout << strcat(web, domain) << endl;
    return 0;
}