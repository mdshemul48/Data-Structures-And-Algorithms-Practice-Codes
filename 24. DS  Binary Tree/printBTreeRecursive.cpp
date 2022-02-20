#include <iostream>

using namespace std;

// binary tree a poti ta node ar 2 ta sub node thake.

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

// aikane amara check kortaci ja root ke null nake;
// null na hole root ar value print kore porar gulaka abar call korbo.

// void printTree(BTNode<int> *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << endl;
//     printTree(root->left);
//     printTree(root->right);
// }

// here we are checking if root exist then print
// if left exist then print left value
// if right exist then print right value

// after that call for left and right
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

int main()
{
    // creating tree
    BTNode<int> *root = new BTNode<int>(1);
    BTNode<int> *n1 = new BTNode<int>(2);
    BTNode<int> *n2 = new BTNode<int>(3);

    root->left = n1;
    root->right = n2;

    printTree(root);

    delete root;

    return 0;
}
