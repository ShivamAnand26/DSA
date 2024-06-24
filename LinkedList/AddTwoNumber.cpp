#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val, Node *next1)
    {
        data = val;
        next = next1;
    }
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

Node *AddTwoNumber(Node *head1, Node *head2)
{
    Node *dummyList = new Node(-1);
    Node *curr = dummyList;
    Node *t1 = head1;
    Node *t2 = head2;

    int carry = 0;

    while (t1 != NULL || t2 != NULL)
    {
        int sum = carry;
        if (t1)
        {
            sum += t1->data;
        }
        if (t2)
        {
            sum += t2->data;
        }

        Node *newNode = new Node(sum % 10);
        carry = sum / 10;

        curr->next = newNode;
        curr = curr->next;

        if (t1)
        {
            t1 = t1->next;
        }
        if (t2)
        {
            t2 = t2->next;
        }
    }
    if (carry)
    {
        Node *newNode = new Node(carry);
        curr->next = newNode;
    }

    return dummyList->next;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->next = new Node(4);

    Node *list2 = new Node(4);
    list2->next = new Node(5);
    list2->next->next = new Node(6);

    Node *output = AddTwoNumber(list1, list2);
    print(output);
}