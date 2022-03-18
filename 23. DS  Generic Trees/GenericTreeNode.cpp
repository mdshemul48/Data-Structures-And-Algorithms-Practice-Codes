#include <bits/stdc++.h>
using namespace std;

// tree can have any number of child node
// siblings is  single node parent of multiple node
// disendant is all the children and grand children
// tree can have many children

// first of all we will create an TreeNode..
// in that node we will add 2 variable..
// 1 will be used to store data and another will add all the children Node..

// then we will create new node and push to root node children array.

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

int main()
{
        TreeNode<int> *root = new TreeNode<int>(1);
        TreeNode<int> *n1 = new TreeNode<int>(2);
        TreeNode<int> *n2 = new TreeNode<int>(3);

        root->children.push_back(n1);
        root->children.push_back(n2);

        return 0;
}