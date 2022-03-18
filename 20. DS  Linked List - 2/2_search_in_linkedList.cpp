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
    /*
    here we area checking and switching after next element
    if our linkedList any data matched to the target
    we will return true.
    otherwise we will come out from the loop and return false;

    */
    Node *temp = head;

    while (temp)
    {
        if (temp->data == target)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Node *head = takeInput();

    bool result = isPresent(head, 5);
    cout << result << endl;

    return 0;
}