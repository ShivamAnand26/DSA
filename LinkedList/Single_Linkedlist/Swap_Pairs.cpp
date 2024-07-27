#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node() : val(0), next(nullptr){};
    Node(int x) : val(x), next(nullptr){};
    Node(int x, Node *next) : val(x), next(next){};
};
Node *swapPairs(Node *head)
{
    if (!head || !head->next)
    {
        return head;
    }
    Node *newHead = head->next;
    head->next = swapPairs(head->next->next);
    newHead->next = head;
    return newHead;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
int main()
{
    Node *LL = new Node(1);
    LL->next = new Node(2);
    LL->next->next = new Node(3);
    LL->next->next->next = new Node(4);

    Node *output = swapPairs(LL);
    print(output);
}