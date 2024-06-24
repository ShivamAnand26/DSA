// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include <bits/stdc++.h>
using namespace std;

bool duplicates(vector<int> &a)
{
    map<int, int> mp;
    bool ans = false;

    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }

    for (auto i : mp)
    {
        if (i.second >= 2)
        {
            ans = true;
        }
    }
    return ans;
}

int main()
{
    // vector<int> v{1, 2, 3, 1};
    // vector<int> v{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    vector<int> v{1, 2, 3, 4};
    bool a = duplicates(v);
    cout << a;
}