#include <bits/stdc++.h>

using namespace std;

void printNumber(int n)
{

    if (n < 1)
    {
        return;
    }

    printNumber(n - 1);

    cout << n << endl;
}  

int main()
{
    int number = 5;
    printNumber(number);
    return 0;
}