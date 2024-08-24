#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;

    Node() : val(), left(), right() {}
    Node(int x) : val(x), left(), right() {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

int maxDepth(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh, rh);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int height = maxDepth(root);
    cout << "Height of the Tree is : " << height;
}