#include <iostream>

using namespace std;

int main()
{
    char sentence[1000];
    // cin.getline store korar somoy sentence and word length deya lage.
    // ar jono aikane sentence ar array and length deya lagba.
    // and sentence sas hoyar por auto null char add kore deya hobe.
    cin.getline(sentence, 1000, '#');
    // aita holo optional char---^
    // aita jodi na dy tahole amadar line enter or (\n) deya input neya off kore deba..
    // aikane build in line bracker use na kora hoyla multiple line nete parbo na..
    cout << sentence << endl;

    return 0;
}