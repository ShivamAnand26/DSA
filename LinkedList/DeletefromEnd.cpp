#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *deletefrom(Node *head, int k)
{
    Node *temp = head;
    int cnt = 0;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    if (cnt == k)
    {
        Node *newHead = head->next;
        delete head;
        return newHead;
    }
    int res = cnt - k;
    temp = head;
    while (temp != NULL)
    {
        res--;
        if (res == 0)
        {
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
            return head;
        }
        temp = temp->next;
    }
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
    Node *head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);

    Node *output = deletefrom(head, 3);
    print(output);
}