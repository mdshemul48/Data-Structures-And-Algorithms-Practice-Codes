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

Node *MergeTwoSortedLinkedList(Node *l1, Node *l2)
{

    /*
    To merge the two linked lists with recursion, we first need to check which of the two linked lists has the smaller head value. The smaller one is our head. If we call it back again with its next node and another linked list, it will merge the linked list and return the new linked list and we will add it to the next node of our current linked list.
   */
    if (l1 == NULL)
    {
        return l2;
    }
    if (l2 == NULL)
    {
        return l1;
    }

    Node *newHead = NULL;
    if (l1->data < l2->data)
    {
        newHead = l1;
        newHead->next = MergeTwoSortedLinkedList(l1->next, l2);
    }
    else
    {
        newHead = l2;
        newHead->next = MergeTwoSortedLinkedList(l1, l2->next);
    }
    return newHead;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Node *l1 = takeInput();
    Node *l2 = takeInput();

    Node *finalNode = MergeTwoSortedLinkedList(l1, l2);
    print(finalNode);

    return 0;
}