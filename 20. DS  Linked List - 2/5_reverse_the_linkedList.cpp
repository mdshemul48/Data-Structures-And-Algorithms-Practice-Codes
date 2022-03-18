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

Node *reverseTheLinkedList(Node *head)
{
    // here first of all selecting the head node as a current node.
    // then we are selecting the prvNode as null

    // after that in the loop we are storeing current next node
    // then we area redirecting currentNode-> next node to prevNode;
    // after that we are selecting prevNode as current node.
    // and current node as next node.

    // we are reperting this proccess till we found NULL and our LinkedList reversed.

    Node *currentNode = head;
    Node *prevNode = NULL;
    while (currentNode != NULL)
    {
        Node *n = currentNode->next;
        currentNode->next = prevNode;

        prevNode = currentNode;
        currentNode = n;
    }
    return prevNode;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Node *head = takeInput();
    head = reverseTheLinkedList(head);
    print(head);

    return 0;
}