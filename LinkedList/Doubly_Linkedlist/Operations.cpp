#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node *back;

    Node(int v, Node *next1, Node *back1)
    {
        val = v;
        next = next1;
        back = back1;
    }
    Node(int v)
    {
        val = v;
        next = nullptr;
        back = nullptr;
    }
};
Node *Convert2DLL(vector<int> a)
{
    Node *head = new Node(a[0]);
    Node *prev = head;

    for (int i = 1; i < a.size(); i++)
    {
        Node *temp = new Node(a[i], nullptr, prev);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}
Node *DeleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev;

    return head;
}

Node *DeleteLast(Node *head)
{
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *last = temp;
    temp->next = nullptr;
    last->back = nullptr;
    delete last;

    return head;
}

Node *Delete_Kth_Index_Element(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *front = temp->next;

    if (prev == NULL && front == NULL)
    {
        return NULL;
    }
    else if (prev == NULL)
    {
        return DeleteHead(temp);
    }
    else if (front == NULL)
    {
        return DeleteLast(head);
    }

    prev->next = front;
    front->back = prev;
    delete temp;
    return head;
}

Node *InsertingBegin(Node *head, int element)
{
    Node *newhead = new Node(element, head, nullptr);
    head->back = newhead;
    return newhead;
}

Node *Insert_Before_tail(Node *head, int element)
{
    Node *temp = head;

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    // Node *prev = temp->back;
    Node *front = temp->next;
    Node *newNode = new Node(element, front, temp);
    // prev->next = newNode;
    front->back = newNode;
    temp->next = newNode;
    return head;
}

Node *Insert_Before_K_element(Node *head, int element, int k)
{
    Node *temp = head;
    int cnt = 0;
    if (k == 1)
    {
        return InsertingBegin(head, element);
    }
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    Node *prev = temp->back;
    Node *newNode = new Node(element, temp, prev);
    temp->back = newNode;
    prev->next = newNode;
    return head;
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    vector<int> arr{11, 2, 4, 5, 6};
    Node *output = Convert2DLL(arr);

    //// Deleting Operations
    // output = DeleteHead(output); //Delete Head Node Function call
    // output = DeleteLast(output); //Delete Last Node Function call
    // output = Delete_Kth_Index_Element(output, 2); //Delete Kth index element Function Call

    //// Inserting Operations
    // output = InsertingBegin(output, 3); // Insert Head Node Function Call
    // output = Insert_Before_tail(output, 3); // Inserting before the Node
    output = Insert_Before_K_element(output, 12, 4); // Inserting the element before the kth index value
    print(output);
}