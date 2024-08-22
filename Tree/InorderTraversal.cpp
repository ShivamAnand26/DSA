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

vector<int> inorderTraversal(Node *root)
{
    vector<int> v;

    if (root == nullptr)
    {
        return v;
    }
    vector<int> left = inorderTraversal(root->left);
    v.insert(v.end(), left.begin(), left.end());

    v.push_back(root->val);

    vector<int> right = inorderTraversal(root->right);
    v.insert(v.end(), right.begin(), right.end());

    return v;
}
int main()
{
    Node *root = new Node(1);
    root->right = new Node(2);
    root->right->left = new Node(3);

    vector<int> v = inorderTraversal(root);
    for (auto it : v)
    {
        cout << it << " ";
    }
}