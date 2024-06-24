#include <bits/stdc++.h>
using namespace std;

struct Node
{

    /* data */
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Node *a = new Node(arr[2], NULL);
    cout << a << endl;
    cout << a->data << endl;
}
