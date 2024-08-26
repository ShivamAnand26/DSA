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

vector<vector<int>> ZigzagTraversal(Node *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
    {
        return ans;
    }

    queue<Node *> q;
    q.push(root);
    bool l2r = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level(size);

        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();

            int index = (l2r) ? i : (size - i - 1);
            level[index] = node->val;

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        ans.push_back(level);
        l2r = !l2r;
    }
    return ans;
}

int main()
{
    Node *root = new Node(3);
    root->right = new Node(20);
    root->left = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    // Corrected line: store the result in a vector of vectors of int
    vector<vector<int>> ans = ZigzagTraversal(root);

    // Corrected loop to print the result
    for (const auto &level : ans)
    {
        for (const auto &val : level)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}