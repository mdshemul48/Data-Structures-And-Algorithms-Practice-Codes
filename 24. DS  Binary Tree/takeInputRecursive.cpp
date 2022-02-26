#include <iostream>

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

// =============================================
// aikane amara first a check kortaci ja input ke -1 nake
// jodi input -1 hoy tar mane user ar binary node add korte chy na..
// ar jodi -1 bad a ono kono sonkha hoy tahole akta new node create kore.
// then left and right node create korar jono abar takeInput function call korbe.
// jodi left ba right takeinput func a input -1 dy tahole oita null return kore deba.
// mane kono data ni..

BTNode<int> *takeInput()
{

    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;

    if (rootData == -1)
    {
        return NULL;
    }

    BTNode<int> *root = new BTNode<int>(rootData);

    root->left = takeInput();
    root->right = takeInput();

    return root;
}

int main()
{
    // creating tree
    BTNode<int> *root = takeInput();

    printTree(root);
    return 0;
}
