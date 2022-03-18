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

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

int linkedListLength(Node *head)
{
    // here we are first of all checking if our linkList head is null or not.
    // if the head is null that's mean our linked list is empty. then we will return 0;
    // but if our linked list head is not empty that's mean our linked list have some items.
    // at that moment we will start loop with condition of node null or not.
    // we will count till we find null as a current node.
    // after all the counting we will return the count variable.

    if (head == NULL)
    {
        return 0;
    }

    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *head = takeInput();
    int n = linkedListLength(head);
    cout << n << endl;

    return 0;
}