#include <bits/stdc++.h>
using namespace std;

// creating dynamic type with template.
template <typename T>
class Pair
{
    T x;
    T y;

public:
    void setX(T x)
    {
        this->x = x;
    }
    T getX()
    {
        return x;
    }

    void setY(T y)
    {
        this->y = y;
    }
    T getY()
    {
        return y;
    }
};

int main()
{

    // int
    Pair<int> f1;

    f1.setX(5);
    f1.setY(6);

    cout << f1.getX() << endl;
    cout << f1.getY() << endl;

    // double
    Pair<double> f2;
    f2.setX(5.1212);
    f2.setY(1.3434);
    cout << f2.getX() << " " << f2.getY() << endl;

    return 0;
}