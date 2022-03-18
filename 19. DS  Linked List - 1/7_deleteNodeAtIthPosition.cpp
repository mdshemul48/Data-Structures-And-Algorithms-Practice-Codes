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

Node *deleteNodeAtIthPosition(Node *head, int i)
{

    /*
    first of all we are checking if our index is valid or not.
    after that if index is 0 then we will make it next node head.
    that will delete our head node.
    ----------
    otherwise we will go to i-1 position and replace i-1 position node next pointer with
    i-1->next->next node. that will delete iTh node.
    */

    if (i < 0)
    {
        return head;
    }
    if (i == 0)
    {
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;
        deletedNode->next = NULL;
        return head;
    }

    int count = 1;
    Node *temp = head;
    while (count <= i - 1 and temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (temp && temp->next)
    {
        Node *deletedNode = temp->next;
        temp->next = temp->next->next;
        deletedNode->next = NULL;
        delete deletedNode;
        return head;
    }

    return head;
}

int main()
{
    // this is passing input to console..
    freopen("input.txt", "r", stdin);

    Node *head = takeInput();
    head = deleteNodeAtIthPosition(head, 1);
    print(head);

    return 0;
}