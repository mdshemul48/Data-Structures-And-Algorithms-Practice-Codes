#include <iostream>
#include <queue>

using namespace std;

template <typename T>
class BTNode
{
public:
    T data;
    BTNode *left;
    BTNode *right;
    BTNode(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    ~BTNode()
    {
        delete left;
        delete right;
    }
};

void printTree(BTNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ": ";

    if (root->left != NULL)
    {
        cout << "L" << root->left->data;
    }

    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;

    printTree(root->left);
    printTree(root->right);
}

BTNode<int> *takeInputlevelWise()
{
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    BTNode<int> *root = new BTNode<int>(rootData);
    queue<BTNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BTNode<int> *f = q.front();
        q.pop();
        cout << "Enter Left child of " << f->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BTNode<int> *child = new BTNode<int>(leftChildData);
            q.push(child);
            f->left = child;
        }

        cout << "Enter Right child of " << f->data << endl;
        int rightChildData;
        cin >> rightChildData;

        if (rightChildData != -1)
        {
            BTNode<int> *child = new BTNode<int>(rightChildData);
            q.push(child);
            f->right = child;
        }
    }
    return root;
}

// first a amara amadar root element ta print kortaci then check kortaci ja
// then amara check korbo ja left right a kono node ase nake.
// jodi thake tahole queue ta push korbo..

void printLevelOrder(BTNode<int> *root)
{
    queue<BTNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        BTNode<int> *front = q.front();
        q.pop();

        cout << front->data << endl;

        if (front->left)
        {
            q.push(front->left);
        }

        if (front->right)
        {
            q.push(front->right);
        }
    }
}

int main()
{

    BTNode<int> *root = takeInputlevelWise();
    printLevelOrder(root);

    return 0;
}
