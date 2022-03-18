#include <bits/stdc++.h>

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
// aikane amara mainly check kortaci. potita node ar left right ar data and node ar data modhe konta choto.
// aita akhom choto hobe oita amra return korechi. and max function a amara ar ulta kaj korci..

int findMin(BTNode<int> *root)
{
    if (!root)
        return INT_MAX;
    int minNum = min(findMin(root->left), findMin(root->right));
    return min(root->data, minNum);
}

int findMax(BTNode<int> *root)
{
    if (!root)
    {
        return INT_MIN;
    }

    return max(root->data, max(findMax(root->left), findMax(root->right)));
}

int main()
{
    BTNode<int> *root = takeInputlevelWise();
    cout << findMin(root) << endl;
    cout << findMax(root) << endl;
    return 0;
}
