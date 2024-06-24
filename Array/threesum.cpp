#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &a)
{
    set<vector<int>> temp;
    vector<vector<int>> output;
    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        int j = i + 1;
        int k = a.size() - 1;
        while (j < k)
        {
            int sum = a[i] + a[j] + a[k];
            if (sum == 0)
            {
                temp.insert({a[i], a[j], a[k]});
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    for (auto triplets : temp)
        output.push_back(triplets);
    return output;
}

int main()
{

    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    // cout<<result;

    return 0;
}