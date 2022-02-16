#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;
    TreeNode(T data)
    {
        this->data = data;
    }
};

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
        return;

    cout << root->data << ": ";

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << " ,";
    }
    cout << endl;

    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> q;

    q.push(root);

    while (!q.empty())
    {
        TreeNode<int> *f = q.front();
        q.pop();
        cout << "Enter no of children of " << f->data << endl;
        int n;
        cin >> n;

        for (int i = 0; i <= n; i++)
        {
            int childData;
            cout << "Enter " << i << " th child of " << f->data << endl;
            cin >> childData;

            TreeNode<int> *child = new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
}

void printTreeLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode<int> *f = q.front();
        q.pop();
        cout << f->data << ": " << endl;

        for (int i = 0; i < f->children.size(); i++)
        {
            cout << f->children[i]->data << " ," << endl;
        }
        cout << endl;

        for (int i = 0; i < root->children.size(); i++)
        {
            q.push(f->children[i]);
        }
    }
}

main()
{
    TreeNode<int> *storage = takeInput();
    printTreeLevelWise(storage);

    return 0;
}