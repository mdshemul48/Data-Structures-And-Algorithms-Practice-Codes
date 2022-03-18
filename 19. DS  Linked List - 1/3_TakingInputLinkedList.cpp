#include <bits/stdc++.h>

using namespace std;

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
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node *takeInput()
{
    int data;
    cin >> data;

    Node *head = NULL; // LL is empty
    Node *tail = NULL; // LL is empty

    // we will stop taking input if user enter -1 in input
    while (data != -1)
    {
        // creating linkedList
        Node *n = new Node(data);
        // checking if first node or not.

        // if the head element is null then our linkedList is empty.
        // or if we have something other then null in head that's mean our list have some value
        // In that case we will add value to the end (tail)
        // after adding to the end. we will update tail to the last element (n element).

        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n; // inseting at Tail
            tail = n;
        }
        cin >> data;
    }
    return head;
}

Node *takeInputInReverse()
{
    Node *head = NULL;
    Node *tail = NULL;

    int data;
    cin >> data;
    while (data != -1)
    {
        Node *n = new Node(data);

        if (tail == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->next = head;
            head = n;
        }
        cin >> data;
    }
    return head;
}

int main()
{
    Node *head = takeInputInReverse();
    print(head);

    return 0;
}