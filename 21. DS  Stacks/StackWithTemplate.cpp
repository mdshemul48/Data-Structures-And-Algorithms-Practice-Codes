#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Stack
{
    T *arr;
    int nextIndex;
    int capacity = 4;

public:
    Stack()
    {
        // create arr with default 4 capacity if user not passing any params.
        arr = new T[4];
        nextIndex = 0;
    }

    Stack(int cap)
    {
        // createing array with capacity provided by user.
        arr = new T[cap];
        nextIndex = 0;
        capacity = cap;
    }

    int size()
    {
        // this will return the size.
        return nextIndex;
    }

    bool isEmpty()
    {
        // this will  return if stack empty or not.
        return nextIndex == 0;
    }

    void push(T value)
    {
        // this will add an element to the top.
        if (capacity == nextIndex)
        {
            // creating new array of 2x size of capacity and coping old values to new one
            T *newArr = new T[capacity * 2];
            // updating capacity value.
            capacity = capacity * 2;
            for (int i = 0; i < capacity; i++)
            {
                newArr[i] = arr[i];
            }
            // after copy deleting old array.
            delete[] arr;
            // assigning new array to old array place.
            arr = newArr;
        }
        arr[nextIndex++] = value;
    }
    void pop()
    {
        // this will remove item from top
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return;
        }
        nextIndex--;
    }
    T top()
    {
        // this will return top element from array.
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return 0;
        }
        return arr[nextIndex - 1];
    }
};

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << s.size() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}