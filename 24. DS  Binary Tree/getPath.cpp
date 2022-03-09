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

//=================================================
// aita amadar first a check kortca ja root ase nake.
// jodi root na thake tahole aita false return korba.
// ar jodi root thake tahole ref vector a root ar value push kore deba..
// then ar jodi root.value == val hoya tahole ar por return kore deba..
// ar jodi na hoy tahole check korba ja aitar left right a ase nake.
// jodi thake tahole oikhan thako true return asba..
// jodi left ba right a thake tar mane amadar BT ta data ase..
// tokhon amara true return korbo.

bool getPath(BTNode<int> *root, int val, vector<int> &ans)
{
    if (root == NULL)
    {
        return false;
    }
    ans.push_back(root->data);

    if (root->data == val)
    {
        return true;
    }

    bool left = getPath(root->left, val, ans);
    bool right = getPath(root->right, val, ans);

    if (left || right)
    {
        return true;
    }
    ans.pop_back();
    return false;
}

int main()
{
    BTNode<int> *root = takeInputlevelWise();
    vector<int> ins;
    if (getPath(root, 9, ins))
    {
        for (int i = 0; i < ins.size(); i++)
        {
            cout << ins[i] << " ";
        }
    }
    else
    {
        cout << "No Path" << endl;
    }
    return 0;
}
