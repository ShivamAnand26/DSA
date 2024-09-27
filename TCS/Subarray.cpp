// Find subarray equals to target

#include <bits/stdc++.h>
using namespace std;

/*void bruteforce(vector<int> v, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        int currentsum = 0;
        for (int j = i; j < n; j++)
        {
            currentsum += v[j];
            if (currentsum == target)
            {
                for (int k = i; k <= j; k++)
                {
                    cout << v[k] << " ";
                }
                cout << endl;
            }
        }
    }
}*/

void optimalApproach(vector<int> &arr, int n, int target)
{
    unordered_map<int, int> sumMap;
    int curSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        if (curSum == target)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
        if (sumMap.find(curSum - target) != sumMap.end())
        {
            int startIndex = sumMap[curSum - target] + 1;
            for (int k = startIndex; k <= i; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        sumMap[curSum] = i;
    }
}

int main()
{
    vector<int> arr = {3, 4, -7, 1, 3, 3, 1, -4};
    int N = arr.size();
    int target = 7;
    optimalApproach(arr, N, target);
    return 0;
}