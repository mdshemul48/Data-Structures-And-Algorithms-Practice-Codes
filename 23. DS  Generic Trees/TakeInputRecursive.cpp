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

TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter num of children of " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
}

int main()
{
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *n1 = new TreeNode<int>(2);
    TreeNode<int> *n2 = new TreeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);

    return 0;
}