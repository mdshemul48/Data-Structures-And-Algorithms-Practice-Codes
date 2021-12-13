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

Node *findMidPointer(Node *head)
{
    // here we are creating 2 pointer 1 will iterate slow and 1 will iterate fast.
    // slow pointer will go 1 node at a time and fast node will go 2 node at a time.
    // so fast node will go 2x of slow node. then if the fast node go at the end of the list.
    // at that time our slow pointer will be at mid position.
    // then we will just return the slow pointer.

    Node *slowPointer = head;
    Node *fastPointer = head->next;

    while (fastPointer)
    {
        if (!fastPointer->next)
        {
            fastPointer = fastPointer->next;
        }
        else
        {
            fastPointer = fastPointer->next->next;
        }
        slowPointer = slowPointer->next;
    }
    return slowPointer;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Node *head = takeInput();

    cout << findMidPointer(head)->data << endl;
    print(head);

    return 0;
}