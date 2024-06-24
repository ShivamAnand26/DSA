// Rerrange Array element by size

#include <bits/stdc++.h>
using namespace std;

// Brute force method

// vector<int> reserve_number(vector<int> &a)
// {
//     vector<int> pos;
//     vector<int> neg;
//     int n = a.size();

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < 0)
//         {
//             pos.push_back(a[i]);
//         }
//         else
//         {
//             neg.push_back(a[i]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         a[2 * i] = pos[i];
//         a[2 * i + 1] = neg[i];
//     }
//     return a;

//      Time Complexity O(N)+O(N) = O(2N)
//      Space Complexity O(N)
// }
vector<int> reserve_number(vector<int> &arr)
{
    // Write your code here.
    vector<int> ans(arr.size(), 0);
    int negindex = 1;
    int posindex = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            ans[negindex] = arr[i];
            negindex += 2;
        }
        else
        {
            ans[posindex] = arr[i];
            posindex += 2;
        }
    }
    return ans;

    // Time Complexity O(N)
    // Space Complexity O(N)
}
int main()
{
    vector<int> v{3, 1, -2, -5, 2, -4};
    vector<int> arr;
    arr = reserve_number(v);

    for (auto it : arr)
    {
        cout << it << " ";
    }
}