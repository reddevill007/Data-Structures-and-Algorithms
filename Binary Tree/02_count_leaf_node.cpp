#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void leafNode(node *root, int &ct)
{
    if (!root)
        return;

    leafNode(root->left, ct);
    if (root->left == NULL && root->right == NULL)
    {
        ct++;
    }
    leafNode(root->right, ct);
}

int main()
{
    node *root = NULL;

    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    int ct = 0;
    leafNode(root, ct);

    cout << "Number of root node is " << ct << endl;
}