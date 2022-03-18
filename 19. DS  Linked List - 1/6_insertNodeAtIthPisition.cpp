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

Node *findIthElement(Node *head, int i)
{
    if (i < 0)
    {
        return NULL;
    }
    int count = 1;
    Node *temp = head;

    while (count <= i and temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return temp;
}

Node *insertNodeAtIthPosition(Node *head, int data, int i)
{
    // first of all we are cheking that we are at 0th index or not.
    // if we area in the zero then we will replace head with our new node.
    // and new head next will point to the old head.
    // otherwise we will find the index using counting and loop.
    // there we will select prev node of our selected node.
    // we will redirect our selected item node to prev item next node.
    // then we will redirect prev node next pointer to our newly created node.
    // after all the work we will return the head node.

    if (i < 0)
    {
        return head;
    }

    if (i == 0)
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }

    int count = 1;
    Node *temp = head;
    while (count <= i - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (temp)
    {
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
        return head;
    }
    return head;
}

int main()
{
    // this is passing input to console..
    freopen("input.txt", "r", stdin);

    Node *head = takeInput();

    head = insertNodeAtIthPosition(head, 5, 1);

    print(head);

    return 0;
}