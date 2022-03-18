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

//==================================================
// aikane amara check kortaci ja root ar left and right side ar value sob same nake.
// jodi same thake tahole true return korte hobe. ar jodi na hoy tahole false.

bool helper(BTNode<int> *left, BTNode<int> *right)
{
    if (left == NULL && right != NULL)
        return false;
    if (left != NULL && right == NULL)
        return false;
    if (left == NULL && right == NULL)
        return true;
    if (left->data != right->data)
        return false;

    return helper(left->left, right->right) && helper(left->right, right->left);
}

bool symmeticBT(BTNode<int> *root)
{
    if (root == NULL)
        return true;
    return helper(root->left, root->right);
}

int main()
{

    BTNode<int> *root = takeInputlevelWise();
    cout << symmeticBT(root) << endl;
    return 0;
}
