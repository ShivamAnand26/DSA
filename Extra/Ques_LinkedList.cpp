#include <bits/stdc++.h>
using namespace std;

// Reverse Array
/*int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    int i = 0, j = v.size() - 1;

    while (i < j)
    {
        swap(v[i], v[j]);
        i++;
        j--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}*/

// Unique String
/*int main()
{
    string s = "GreekforGreek";

    sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            return 0;
        }
    }
    return 1;
}*/

// Maximum Product of 2 Element
/*int main()
{
    vector<int> v{1, 2, 3, 4, 5};

    int max1 = 0, max2 = 0;
    for (auto &i : v)
    {
        if (i > max1)
        {
            max2 = max1;
            max1 = i;
        }
        else if (i > max2)
        {
            max2 = i;
        }
    }
    cout << max1 * max2;
}*/

// subarray with the maximum sum (Kadane's Algorithm).
/*int main()
{
    vector<int> v{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxsum = v[0];
    int currsum = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        currsum = max(v[i], v[i] + currsum);
        maxsum = max(maxsum, currsum);
    }
    cout << maxsum;
}*/

// Linked List Cycle
/*struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head)
{
    ListNode *fast = head;
    ListNode *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    // Create a linked list with a cycle
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next; // Creating a cycle
    cout << hasCycle(head);
}*/

// Reverse Linkedlist
/*struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr){};
};

ListNode *reverseLinkedlist(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;
    while (curr != NULL)
    {
        ListNode *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
void printLinkedList(ListNode *head)
{
    while (head != nullptr)
    {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}
int main()
{
    // Create a linked list with a cycle
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    // head->next->next->next->next = head->next; // Creating a cycle
    ListNode *output = reverseLinkedlist(head);
    printLinkedList(output);
}*/

// remove the N-th node from the end of the list.
/*struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *findfromend(ListNode *head, int n)
{
    ListNode *res = new ListNode(0, head);
    ListNode *dummy = res;

    for (int i = 0; i < n; i++)
    {
        head = head->next;
    }
    while (head != NULL)
    {
        head = head->next;
        dummy = dummy->next;
    }
    dummy->next = dummy->next->next;
    return res->next;
}

void printList(ListNode *head)
{
    while (head != nullptr)
    {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *output = findfromend(head, 2);
    printList(output);
}*/

// Merge Two Sort LinkedList
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoList(ListNode *list1, ListNode *list2)
{
    ListNode *dummy = new ListNode();
    ListNode *curr = dummy;

    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->val > list2->val)
        {
            curr->next = list2;
            list2 = list2->next;
        }
        else
        {
            curr->next = list1;
            list1 = list1->next;
        }
        curr = curr->next;
    }
    curr->next = (list1 != nullptr) ? list1 : list2;
    return dummy->next;
}
void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode *output = mergeTwoList(list1, list2);

    printList(output);
}
