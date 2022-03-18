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

// first a amara akta input neya root node create kori..
// then amara akta queue ar maje first node push kori.
// then loop ar maje amara oita queue thaka remove kore oitar left and right node ar jono data input ny..
// and oigula abar queue ta push kore.
// jai projonto amadar input a -1 na asba and queue empty na hobe.
// sai projonto amara aibabe input neta thakbo..

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

int main()
{

    BTNode<int> *root = takeInputlevelWise();
    printTree(root);

    return 0;
}
