#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;

    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

int maxPathDown(Node *root, int &maxi)
{
    if (root == NULL)
    {
        return 0;
    }

    int lefts = max(0, maxPathDown(root->left, maxi));
    int rights = max(0, maxPathDown(root->right, maxi));

    maxi = max(maxi, lefts + rights + root->val);
    return (root->val) + max(lefts, rights);
}

int maxPathSum(Node *root)
{
    int maxi = INT_MIN;
    maxPathDown(root, maxi);
    return maxi;
}

int main()
{
    Node *root = new Node(1);
    root->right = new Node(3);
    root->left = new Node(2);

    cout << maxPathSum(root);
}