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

Node *removeKthElementFromEnd(Node *head, int k)
{

    
    Node *fastNode = head;
    Node *slowNode = head;
    int count = 0;
    while (count <= k + 1)
    {
        fastNode = fastNode->next;
        count++;
    }

    while (fastNode)
    {
        fastNode = fastNode->next;
        slowNode = slowNode->next;
    }
    slowNode->next = slowNode->next->next;

    return head;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Node *head = takeInput();
    head = removeKthElementFromEnd(head, 4);
    print(head);

    cout << "DONE" << endl;
    return 0;
}