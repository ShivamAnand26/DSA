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

vector<int> IterativePostorderTraversal(Node *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }

    stack<Node *> st1, st2;
    st1.push(root);
    while (!st1.empty())
    {
        root = st1.top();
        st1.pop();
        st2.push(root);

        if (root->left != NULL)
        {
            st1.push(root->left);
        }
        if (root->right != NULL)
        {
            st1.push(root->right);
        }
    }
    while (!st2.empty())
    {
        ans.push_back(st2.top()->val);
        st2.pop();
    }
    return ans;
}
int main()
{
    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    vector<int> v = IterativePostorderTraversal(root);
    for (int i : v)
    {
        cout << i << " ";
    }
}