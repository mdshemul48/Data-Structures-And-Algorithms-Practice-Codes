#include <iostream>

using namespace std;

class DynamicArray
{
    int *data;     // static array
    int nextIndex; // kon index a next element add kora hobe oitar index
    int capacity;  // total size of the array
public:
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    // inital capacity
    DynamicArray(int c)
    {
        data = new int[c];
        nextIndex = 0;
        capacity = c;
    }

    // coping another object full value
    DynamicArray(DynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        // this -> data = d.data; // shalow copy
        int *data = new int[capacity];
        // deep copy
        for (int i = 0; i < d.nextIndex; i++)
        {
            data[i] = d.data[i];
        }
    }

    void operator=(DynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        // this -> data = d.data; // shalow copy
        int *data = new int[capacity];
        // deep copy
        for (int i = 0; i < d.nextIndex; i++)
        {
            data[i] = d.data[i];
        }
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            // jodi amaradr current data array full hoya jai
            // tahole amara aikane ar akta array create korbo jaita oitar thaka 2x hobe capacity ta..
            // aikane amara akta new array jaita old array ar thaka 2x create kortaci..

            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            // coping old array data to new array
            delete[] data;
            data = newData;
            // copy korar por amadar array ar capacity 2x kore debo.. karon capacity old array ar size deya.
            // oita new array create korar somoy amara 2x kore deyaci array ar size..
            capacity = capacity * 2;
        }
        // aikane just amara next index a data rakhe next index increase kore detaci.
        data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element, int i)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            add(element);
        }
        else
        {
            return;
        }
    }

    int get(int i)
    {
        if (i >= 0 && i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }

    void print()
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    int getCapacity()
    {
        return capacity;
    }
};