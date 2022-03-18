#include <iostream>

#include "DynamicArray.cpp"
using namespace std;

int main()
{
    DynamicArray d1;

    d1.add(10);
    d1.add(20);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.add(70);
    d1.print();
    cout << d1.getCapacity() << endl;

    DynamicArray d2(d1);
    d1.add(100, 0);

    d1.print();
    d2.print();

    return 0;
}