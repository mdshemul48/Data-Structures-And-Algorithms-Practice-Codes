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

    /*
    the fastNode will walk kth pointer first then it will come out of the loop.
    after that the slowNode and fastNode will walk togathar..
    when the fastNode will go to the end.
    the slowPointer will be at his destination. from end to kTh+1 node.
    at that time we will delete the kth Node from list.
    by
    slowNode->next = (kthNode+1)->next->next;
    */
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