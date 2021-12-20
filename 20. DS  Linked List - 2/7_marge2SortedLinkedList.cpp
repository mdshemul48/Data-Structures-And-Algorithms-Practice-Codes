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

    The first thing we check here is whether any linked list is undefined.
    If a linked list is undefined then we do not need to merge.
    Then we will just return the linked list.

    In other cases, we will check which of our two lists is smaller in value. The node whose first value is smaller, we will rate as main head node.
    Then we will check the middle of the loop which is smaller between the current nodes of our 2 lists.
    We will add the smallest one to the tile of our final node.

    After doing this, when we get a node NULL, then we have a loop out.
    Now if we get the last node NULL of list 1 then we will add all the nodes in the above list to last.


    */
    if (l1 == NULL)
        return l2;

    if (l2 == NULL)
        return l1;

    Node *finalHead = NULL; // head of the list to return.

    if (l1->data < l2->data)
    {
        finalHead = l1;
        l1 = l1->next;
    }
    else
    {
        finalHead = l2;
        l2 = l2->next;
    }

    Node *p = finalHead; // pointer to form new list

    while (l1 && l2)
    {
        if (l1->data < l2->data)
        {
            p->next = l1; // inserting at tail
            l1 = l1->next;
        }
        else
        {
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
    }

    if (l1)
    {
        p->next = l1;
    }
    else
    {
        p->next = l2;
    }
    return finalHead;
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