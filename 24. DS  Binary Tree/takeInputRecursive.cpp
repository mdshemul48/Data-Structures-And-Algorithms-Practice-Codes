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

    BTNode<int> *leftChild = takeInput();
    BTNode<int> *rightChild = takeInput();

    root->left = leftChild;
    root->right = rightChild;

    return root;
}

int main()
{
    // creating tree
    BTNode<int> *root = takeInput();

    return 0;
}
