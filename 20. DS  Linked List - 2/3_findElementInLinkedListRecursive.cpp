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

bool isPresent(Node *head, int target)
{
    // here we are checking if linkedList has any value or not.
    // if head == null that's mean our list empty. return false;
    // otherwise we will check if head-> data = target o not
    // if head-> data = target then return 1;
    // otherwise call for next values.
    if (!head)
        return 0;

    if (head->data == target)
        return 1;

    return isPresent(head->next, target);
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Node *head = takeInput();

    bool result = isPresent(head, 6);
    cout << result << endl;

    return 0;
}