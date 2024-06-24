// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include <bits/stdc++.h>
using namespace std;

int insert_position(vector<int> v, int target)
{
    int low = 0;
    int high = v.size();
    int mid;

    if (target > v[high - 1])
    {
        return high;
    }

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (target <= v[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> v{1, 3, 5, 6};
    // int target = 5;
    int result = insert_position(v, 5);
    cout << result << endl;

    // target = 7;
    int res = insert_position(v, 7);
    cout << res << endl;
}
