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
Node *ConvertArr2LL(vector<int> arr)
{

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
Node *DeleteHead(Node *head)
{
    if (head == nullptr)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *DeleteLast(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return NULL;
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

Node *Delete_K_Index(Node *head, int k)
{
    if (head == nullptr)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node *Delete_K_Element(Node *head, int k)
{
    if (head == nullptr)
        return head;

    // if (k == 1)
    // {
    //     Node *temp = head;
    //     head = head->next;
    //     delete temp;
    //     return head;
    // }

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {

        if (temp->data == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *Inserting_head(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}

Node *Inserting_Last(Node *head, int val)
{
    if (head == NULL)
        return new Node(val);

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newnode = new Node(val);
    temp->next = newnode;
    return head;
}

Node *Inserting_At_K_Index(Node *head, int val, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(val);
        }
    }

    if (k == 1)
    {
        return new Node(val, head);
    }
    Node *temp = head;
    int cnt = 0;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *el = new Node(val, temp->next);
            temp->next = el;
            break;
        }
        temp = temp->next;
    }
    return head;
}
Node *Inserting_Before_K_Val(Node *head, int val, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->data == k)
    {
        return new Node(val, head);
    }
    Node *temp = head;

    while (temp != NULL)
    {

        if (temp->next->data == k)
        {
            Node *el = new Node(val, temp->next);
            temp->next = el;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr{12, 15, 10, 11, 16};
    Node *output = ConvertArr2LL(arr);

    ////Deleting Operations
    // output = DeleteHead(output); //DeleteHead Function Call
    // output = DeleteLast(output); //DeleteTail Function Call
    // output = Delete_K_Index(output, 3); //Deleting kth index element
    // output = Delete_K_Element(output, 10); // Deleting k element

    ////Inserting Operations
    // output = Inserting_head(output, 1); //Inserting Element at the head
    // output = Inserting_Last(output, 29); //Inserting Element at the last
    // output = Inserting_At_K_Index(output, 23, 2); //Inserting element at the Kth index
    output = Inserting_Before_K_Val(output, 23, 15); // Inserting element before the k value

    // cout << output->data << endl;
    // cout << output->next->data << endl;

    while (output != nullptr)
    {
        cout << output->data << "->";
        output = output->next;
    }
    cout << "Null";
}
