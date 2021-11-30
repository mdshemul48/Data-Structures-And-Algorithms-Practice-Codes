#include <iostream>

using namespace std;

int main()
{
    int marks[100];

    int n;
    cout << "enter student number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // getting input and adding to array
        cin >> marks[i];
        // updating array data
        marks[i] = marks[i] * 2;
    }

    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << ", ";
    }
    return 0;
}