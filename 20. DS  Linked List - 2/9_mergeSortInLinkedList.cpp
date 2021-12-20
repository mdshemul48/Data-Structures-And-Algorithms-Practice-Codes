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

Node *mergeSortedList(Node *a, Node *b)
{
    if (!a)
        return b;
    if (!b)
        return a;

    Node *mainHead = NULL;
    if (a->data < b->data)
    {
        mainHead = a;
        a = a->next;
    }
    else
    {
        mainHead = b;
        b = b->next;
    }

    Node *tail = mainHead;
    while (a and b)
    {
        if (a->data < b->data)
        {
            tail->next = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }

    if (a)
    {
        tail->next = a;
        tail = tail->next;
    }
    if (b)
    {
        tail->next = b;
        tail = tail->next;
    }
    return mainHead;
}

Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    // break list into 2 half

    Node *slow = head;
    Node *fast = head->next;

    while (fast and fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *n = slow->next;
    slow->next = NULL;

    Node *a = mergeSort(head);
    Node *b = mergeSort(n);

    return mergeSortedList(a, b);
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Node *head = takeInput();
    Node *result = mergeSort(head);
    print(result);
    return 0;
}