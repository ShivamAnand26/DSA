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

bool isSameTree(Node *p, Node *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL || q == NULL)
    {
        return false;
    }

    if (p->val != q->val)
    {
        return false;
    }

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main()
{
    Node *p = new Node(1);
    p->right = new Node(3);
    p->left = new Node(2);

    Node *q = new Node(1);
    q->right = new Node(3);
    q->left = new Node(2);

    cout << isSameTree(p, q);
}