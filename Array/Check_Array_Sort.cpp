#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            // Check if there is a drop in order
            if (nums[i] > nums[(i + 1) % n])
            {
                count++;
            }
            // If there is more than one drop, it can't be rotated to become sorted
            if (count > 1)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    vector<int> vect1{2, 1, 3, 4};
    bool sorted = sol.check(vect1);

    if (sorted)
    {
        cout << "Array is sorted." << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}
