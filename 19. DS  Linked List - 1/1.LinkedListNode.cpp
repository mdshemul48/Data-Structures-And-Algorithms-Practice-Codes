#include <bits/stdc++.h>

using namespace std;

// this is our node for linked list.
// ai node init korar somoy aita akta data neya akta node return kore debo..
// jaitar next a null thakba..
// aitar modhe  Node *next; deyar mane aita porar node ar memory address store korba..
// every Node will store a value and it's next node.(memory address) (pointer)

// jokhon amara node init korbo tokhon amara next node ar pointer add kore debo..
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int main()
{
    // createing new node;
    Node n1(1);
    Node n2(2);

    // assigning node next pointer || aita amadar list ar first element list ar next element ka point korba..
    n1.next = &n2;

    //
    cout << n1.data << " " << n2.data << endl; // accessing linkedListData manually..

    Node *head = &n1; // aita holo array ar main head node; aita thaka amadar linkedList start hobe.

    cout << head->data << endl; // aita head->data use kore amara list ar first node ar data access korte pari..

    // Dynamically
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    n3->next = n4;

    return 0;
}