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

int LengthofLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int main()
{
    Node *LL = new Node(1);
    LL->next = new Node(2);
    LL->next->next = new Node(3);
    LL->next->next->next = new Node(4);

    int output = LengthofLL(LL);
    cout << output;
}