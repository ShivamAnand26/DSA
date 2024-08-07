#include <bits/stdc++.h>
using namespace std;

struct Node
{
    // int data;
    // Node *next;

    // Node(int data1, Node *next1)
    // {
    //     data = data1;
    //     next = next1;
    // }
    // Node(int data1)
    // {
    //     data = data1;
    //     next = nullptr;
    // }
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

void ReverseL(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    Node *temp = prev;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *LL = new Node(1);
    LL->next = new Node(2);
    LL->next->next = new Node(3);
    LL->next->next->next = new Node(4);

    ReverseL(LL);
    // cout << output;
}