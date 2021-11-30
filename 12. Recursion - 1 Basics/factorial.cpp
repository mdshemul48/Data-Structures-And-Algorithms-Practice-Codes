
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    // jokhon amara ak function ka bar bar call korte thaki..
    // without any return condition tokhon oita jai pojonto memory
    // sas na hoy oi pojonto nejaka neja call korte thake..
    // and memory sas hoyar por amadar error deya stop hoya jai..

    // aikane amara factorial bar somoy somoy potak bar factoral ka n-1 deya call kortaci..
    // aikane jodi amara condition na dy tahole aita jai pojonto memory sas na hobe oi pojonto
    // nejaka neja n-1 deya call korte thakba..

    // ar jono amara aikane n==1 hoyla amara 1 ka return kore detaci..
    // abar same function ka call kortaci na..
    // aibar aikan thake return korla ar upor ar function 1*2*3*4*5 aibabe multiply kore deya deba.
    // and first ar function call a jaya expected result return kore deba.
    if (n <= -1)
        return -1;
    {
        return 1;
    }

    // aikane n number ar first time a factorial hobe
    //      5! ->     n! = n * n-1!
    //      5! ->     5! = 5 * 5-1!
    //      5! ->     5! = 5 * 4!

    // same as

    //      5! ->    factorial(n) = n * factorial(n-1);
    //      5! ->    factorial(5) = 5 * factorial(5-1);
    //      5! ->    factorial(5) = 5 * factorial(4);

    return n * factorial(n - 1);
}
int main()
{
    // jokhon kono function neja nejaka call kore take recursion function bole.
    // jokhon kono problem same babe with smaller input size deya kora jabe
    // tokhon amara recursion use korbo..

    // jamon amara fectrial deya 5 ar fectrial bar korte pari..
    // then oitar moda abar 4 ar factorial bar korte pari..
    // same function deya.

    cout << factorial(5) << endl;
    return 0;
}
