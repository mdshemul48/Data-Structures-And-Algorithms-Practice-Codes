#include <bits/stdc++.h>
using namespace std;

// creating dynamic type with template.
template <typename T, typename V>
class Pair
{
    T x;
    V y;

public:
    void setX(T x)
    {
        this->x = x;
    }
    T getX()
    {
        return x;
    }

    void setY(V y)
    {
        this->y = y;
    }
    V getY()
    {
        return y;
    }
};

int main()
{

    // int
    Pair<int, int> f1;

    f1.setX(5);
    f1.setY(6);

    cout << f1.getX() << endl;
    cout << f1.getY() << endl;

    // double
    Pair<double, double> f2;
    f2.setX(5.1212);
    f2.setY(1.3434);
    cout << f2.getX() << " " << f2.getY() << endl;

    // int and char togathar
    Pair<int, char> f3;
    f3.setX(1);
    f3.setY('g');
    cout << f3.getX() << " " << f3.getY() << endl;

    return 0;
}