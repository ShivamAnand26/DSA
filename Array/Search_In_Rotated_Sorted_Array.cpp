// This problem is asking you to find the index of a target integer within a sorted array that may have been rotated at some pivot point. The goal is to achieve this with a runtime complexity of O(log n), meaning the algorithm's time complexity should grow logarithmically with the size of the input array.
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &a, int target)
{
    int left = 0;
    int right = a.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (a[mid] == target)
        {
            return mid;
        }

        if (a[left] <= a[mid])
        {
            if (a[left] <= target && target < a[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            if (a[mid] < target && a[right] >= target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    cout << "Index of " << target1 << " in nums1: " << search(nums1, target1) << endl;

    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    int target2 = 3;
    cout << "Index of " << target2 << " in nums2: " << search(nums2, target2) << endl;

    vector<int> nums3 = {1};
    int target3 = 0;
    cout << "Index of " << target3 << " in nums3: " << search(nums3, target3) << endl;

    return 0;
}