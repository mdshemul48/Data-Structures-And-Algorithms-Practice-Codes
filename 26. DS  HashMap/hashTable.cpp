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

template <typename V>
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

    V getValue(string key)
    {
        // aikane amara fist a busket index bar kortaci for key
        // then amara oitar head node dhore check kortaci konta key oitar sate match hoy.
        // jodi match hoy tahole otar value return kore debo..
        // ar na hole just 0 return kore debo.
        int busketIndex = getBucketIndex(key);
        MapNode<V> *head = buckets[busketIndex];
        while (head != NULL)
        {
            if (head->key == key)
            {
                return head->value;
            }
            head = head->next;
        }
        return 0;
    }
    void insert(string key, V value)
    {
        // ai function a first a amara amadar key ar jono akta index value nebo using getBusketFunc
        // then amara oitar head dhore check korbo ja oitar modhe amadar key deya already exist kono value ase nake..
        // jodi amadar key already thake tahole amara just oitar value ta update kore debo..
        // ar amon na hole amara amadar head null pabo..

        // then amara akta new node create kore then jodi already exist linkedList thake tahole oitar samne add kore debo.
        // and count++ kore debo.
        int bucketIndex = getBucketIndex(key);
        MapNode<V> *head = buckets[bucketIndex];

        while (head != NULL)
        {
            if (head->key == key)
            {
                head->value = value;
                return;
            }
            head = head->next;
        }
        MapNode<V> *node = new MapNode<V>(key, value);
        node->next = buckets[bucketIndex];
        buckets[bucketIndex] = node;
        count++;
    }
    void remove(string key)
    {

        // here amara first a amadar key ar jono index ta neya nebo.
        // then oita jai position a ase oikane amara linked List a check korbo ja amadar key ase nake..
        // jodi amadar key thake tahole amara key matched node ar prev node to current node ar next node a point kore debo.
        // ar jodi head node matched hoy tahole amara just head node ar next node ka point kore head node delete kore debo.
        // jodi key amadar table a na thake tahole amara just 0 return kore debo.

        int basketIndex = getBucketIndex(key);
        MapNode<V> *head = buckets[basketIndex];
        MapNode<V> *prev = NULL;

        while (head != NULL)
        {
            if (head->key == key)
            {
                if (prev == NULL)
                {
                    buckets[basketIndex] = head->next;
                }
                else
                {
                    prev->next = head->next;
                }
                V value = head->value;
                head->next = NULL;
                delete head;
                count--;
                return value;
            }
            prev = head;
            head = head->next;
        }
        return 0;
    }
};

int main()
{

    return 0;
}