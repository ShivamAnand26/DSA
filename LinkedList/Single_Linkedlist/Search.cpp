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

int searchElement(Node *head, int search)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->val == search)
        {
            return 1;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    return 0;
}
int main()
{
    Node *LL = new Node(1);
    LL->next = new Node(2);
    LL->next->next = new Node(3);
    LL->next->next->next = new Node(4);

    int output = searchElement(LL, 3);
    cout << output << endl;
    output = searchElement(LL, 8);
    cout << output << endl;
}