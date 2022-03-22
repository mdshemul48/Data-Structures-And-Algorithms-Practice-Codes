#include <bits/stdc++.h>
using namespace std;

// collision handling a
// closed hasing a amara jodi collision hoy tahole linked List deya handle kori.
// ar open addressing a amara jodi collision hoy tahole next index a store kore debo..
//---------------------> Linear Probing=> aikane amara targat index jodi already value thake tahole next tai check korbo then oitai store korbo.
//---------------------> Quadratic Probing a amara i^2 a check korbo kono element ase nake. jodi na thake tahole oikane store korbo. (better option)

template <typename v>
class MapNode
{
public:
    string key;
    v value;
    MapNode *next;
    MapNode(string key, v value)
    {
        this->key = key;
        this->value = value;
    }
    ~MapNode()
    {
        delete next;
    }
};

template <typename v>
class MyMap
{
private:
    MapNode<v> **buckets;
    int count;
    int numBuckets;

    int getBucketIndex(string key)
    {
        int hashcode = 0;

        int base = 1;
        int p = 37;
        for (int i = key.size() - 1; i >= 0; i--)
        {
            hashcode += key[i] * base;
            base = base * p;
            hashcode = hashcode % numBuckets;
            base = base % numBuckets;
        }

        return hashcode % numBuckets;
    }

public:
    MyMap()
    {
        count = 0;
        numBuckets = 5;
        buckets = new MapNode<v> *[numBuckets];
        for (int i = 0; i < numBuckets; i++)
        {
            buckets[i] = NULL;
        }
    }
    ~MyMap()
    {
        for (int i = 0; i < numBuckets; i++)
        {
            delete buckets[i];
        }
    }

    int size()
    {
        return count;
    }

    v getValue(string key)
    {
    }
    void insert(string key, v value)
    {
        int bucketIndex = getBucketIndex(key);
    }
    void remove()
    {
    }
};

int main()
{

    return 0;
}