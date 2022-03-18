#include <bits/stdc++.h>

using namespace std;
int countDigits(int number)
{
    // aikane jodi kono number 10 deya bag dy
    // tahole last thake akta number remove kore dy..
    //
    // base case
    if (number == 0)
    {
        return 0;
    }
    // then aikane amra divide korar por abar baki number deya abar
    // count korar jono call korbo..
    //
    // calculating and recursion
    return 1 + countDigits(number / 10);
}
int main()
{
    int numbers = 4025;
    cout << countDigits(numbers) << endl;
    return 0;
}