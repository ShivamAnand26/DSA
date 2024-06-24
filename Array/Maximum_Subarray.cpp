// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <bits/stdc++.h>
using namespace std;

int maxsum(vector<int> &a)
{

    // int maxsum = INT_MIN;
    // int currentsum = 0;

    // for (int i = 0; i < a.size(); i++)
    // {
    //     currentsum += a[i];

    //     if (currentsum > maxsum)
    //     {
    //         maxsum = currentsum;
    //     }

    //     if (currentsum < 0)
    //     {
    //         currentsum = 0;
    //     }
    // }
    // return maxsum;

    int maxsum = a[0];
    int currentsum = a[0];

    for (int i = 1; i < a.size(); i++)
    {
        currentsum = max(a[i], currentsum + a[i]);
        maxsum = max(currentsum, maxsum);
    }
    return maxsum;
}

int main()
{
    vector<int> v{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int c = maxsum(v);
    cout << c;
}