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

int findLength(Node *head)
{

    // if the head null then return 0;
    // or call for the head->next.
    // it will return length for the rest of the list.
    // after it return we will + with 1 and return from the function.
    if (!head)
    {
        return 0;
    }

    return 1 + findLength(head->next);
}

int main()
{

    freopen("input.txt", "r", stdin);
    Node *head = takeInput();
    print(head);
    int n = findLength(head);
    cout << n << endl;

    return 0;
}