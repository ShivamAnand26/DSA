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

vector<int> IterativePreorderTraversal(Node *root)
{
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }

    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        root = st.top();
        st.pop();
        ans.push_back(root->val);

        if (root->right != nullptr)
        {
            st.push(root->right);
        }

        if (root->left != nullptr)
        {
            st.push(root->left);
        }
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

    vector<int> v = IterativePreorderTraversal(root);
    for (int i : v)
    {
        cout << i << " ";
    }
}