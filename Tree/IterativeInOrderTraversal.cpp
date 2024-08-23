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

vector<int> IterativeInorderTraversal(Node *root)
{
    stack<Node *> st;
    Node *node = root;
    vector<int> ans;

    while (true)
    {
        if (node != nullptr)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty() == true)
            {
                break;
            }
            node = st.top();
            st.pop();
            ans.push_back(node->val);
            node = node->right;
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

    vector<int> v = IterativeInorderTraversal(root);
    for (int i : v)
    {
        cout << i << " ";
    }
}