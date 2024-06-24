#include <bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> &a)
{
    vector<int> ans;
    int maxl = INT_MIN;
    int n = a.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxl)
        {
            ans.push_back(a[i]);
        }
        maxl = max(a[i], maxl);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> v{10, 22, 12, 3, 0, 6};
    vector<int> arr;
    arr = leader(v);

    for (auto it : arr)
    {
        cout << it << " ";
    }
}