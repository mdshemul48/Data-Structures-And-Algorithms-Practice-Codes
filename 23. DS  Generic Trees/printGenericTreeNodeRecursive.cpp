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

// this print func will take params and call same func with it root all the children
// this way all the children data will get print
// void printTree(TreeNode<int> *root)
// {
//     cout << root->data << endl;

//     for (int i = 0; i < root->children.size(); i++)
//     {
//         printTree(root->children[i]);
//     }
// }

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

int main()
{
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *n1 = new TreeNode<int>(2);
    TreeNode<int> *n2 = new TreeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);

    printTree(root);

    return 0;
}