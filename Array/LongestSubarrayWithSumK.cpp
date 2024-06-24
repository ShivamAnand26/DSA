// Longest SubArray with sum K
#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    int right = 0, left = 0;
    long long sum = a[0];
    int maxlength = 0;
    int n = a.size();

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k)
        {
            maxlength = max(maxlength, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += a[right];
        }
    }

    return maxlength;
}
int main()
{
    vector<int> v{1, 2, 3, 1, 1, 1, 1};
    int result = longestSubarrayWithSumK(v, 3);
    cout << result;
}