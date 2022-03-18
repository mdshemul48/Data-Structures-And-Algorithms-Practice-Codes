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

void print(Node *head)
{
    // we will print full linkedList in this function.
    // cheking if next node is null or not and if next node not null then print the value
    // and set next node to head node.
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    // creating head node
    Node n1(1);
    Node *head = &n1;

    // creating manual node
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    // pointing to next node
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    // creating print function
    print(head);

    return 0;
}