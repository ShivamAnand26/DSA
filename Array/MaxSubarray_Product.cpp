#include <bits/stdc++.h>
using namespace std;

int maxproduct(vector<int> nums)
{
    if (nums.empty())
        return 0;
    int maxpro = nums[0];
    int minpro = nums[0];
    int result = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            swap(maxpro, minpro);
        }
        maxpro = max(nums[i], nums[i] * maxpro);
        minpro = min(nums[i], nums[i] * minpro);

        result = max(result, maxpro);
    }
    return result;
}

int main()
{
    vector<int> v{2, 3, -2, 4};
    cout << maxproduct(v) << endl;
}