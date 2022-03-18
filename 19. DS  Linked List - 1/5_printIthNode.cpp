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

    // here we are counting the array item and checking if out counter mathchs with index or not.
    // if our current index == i that's means we found our expected item.
    // after that we will just return that node.
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

int main()
{
    // this is passing input to console..
    freopen("input.txt", "r", stdin);

    Node *head = takeInput();

    Node *IthElement = findIthElement(head, 0);

    cout << IthElement->data << endl;
    return 0;
}