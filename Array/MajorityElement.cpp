// Majority Elemement in the Array
#include <bits/stdc++.h>
using namespace std;

// Brute force Method
// int majorityElement(vector<int> v)
// {
//     // Write your code here
//     int cnt = 0;
//     int n = v.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (v[i] == v[j])
//             {
//                 cnt++;
//             }
//         }
//         if (cnt > (n / 2))
//         {
//             return v[i];
//         }
//     }
// }

// Second Method

int majorityElement(vector<int> v)
{
    // Write your code here
    // int cnt = 0;
    map<int, int> mpp;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        mpp[v[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > (n / 2))
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> v{2, 2, 1, 3, 1, 1, 3, 1, 1};
    int result = majorityElement(v);
    cout << result;
}