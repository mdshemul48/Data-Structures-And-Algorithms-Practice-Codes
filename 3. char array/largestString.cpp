#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int inputLimit;
    cin >> inputLimit;

    cin.get();

    char largestStr[1000];
    char sentence[1000];
    while (inputLimit--)
    {
        cin.getline(sentence, 1000);
        int inputLength = strlen(sentence);
        if (strlen(largestStr) < inputLength)
        {

            strcpy(largestStr, sentence);
        }
    }

    cout << largestStr << endl;
    return 0;
}