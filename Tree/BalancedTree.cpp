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

// Method 1: Time Complexity O(N*N)
/*int maxDepth(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh, rh);
}

bool check(Node *root)
{
    if (root == nullptr)
    {
        return true;
    }

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    if (abs(lh - rh) > 1)
    {
        return false;
    }

    bool left = check(root->left);
    bool right = check(root->right);

    if (!left || !right)
    {
        return false;
    }

    return true;
}*/

// Method 2: Time Complexity O(N)
int dfsHeight(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int lh = dfsHeight(root->left);
    int rh = dfsHeight(root->right);

    if (lh == -1 || rh == -1)
    {
        return -1;
    }

    if (abs(lh - rh) > 1)
    {
        return -1;
    }
    return max(lh, rh) + 1;
}

bool isBalanced(Node *root)
{
    return dfsHeight(root) != -1;
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

    bool check1 = isBalanced(root);
    if (check1 == true)
    {
        cout << "It is a Balanced Binary Tree." << endl;
    }
    else
    {
        cout << "It is not a Balanced Binary Tree." << endl;
    }
}