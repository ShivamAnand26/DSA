// Given an integer array nums and an integer k, return the kth largest element in the array.
// Note that it is the kth largest element in the sorted order, not the kth distinct element.
// Can you solve it without sorting?

#include <bits/stdc++.h>
using namespace std;

int kgreaterelement(vector<int> &a, int k)
{
    priority_queue<int, vector<int>, greater<>> minheap;

    for (auto i : a)
    {
        minheap.push(i);
        if (minheap.size() > k)
        {
            minheap.pop();
        }
    }
    return minheap.top();
}
int main()
{
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 4;

    int kthLargest = kgreaterelement(nums, k);

    cout << "The " << k << "th largest element is: " << kthLargest << endl;

    return 0;
}