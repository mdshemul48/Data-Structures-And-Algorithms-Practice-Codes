#include <iostream>

using namespace std;

int main()
{
    char sentence[1000];
    // aikane amara cin.get() deya potakta charactor oigula amara
    // sentence char array ar moda rakha hoyca..

    // fist a loop ar baira amara cin.get() deya first char nebo..
    // then amara ar porae jai pojonto cin.get() deya /n (enter press) na hoy
    // oi jononto append korte thakbo..
    // tar por loop ar baira amara akdon last a "\n"
    // add kore char array tarminane kore debo.
    char temp = cin.get();
    int len = 0;
    while (temp != '\n')
    {
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\n';

    cout << sentence << endl;
    return 0;
}