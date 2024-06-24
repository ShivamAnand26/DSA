#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> foursum(vector<int> &a, int k)
{
    vector<vector<int>> ans;
    sort(a.begin(), a.end());
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        if (i > 0 and a[i] == a[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 and a[j] == a[j - 1])
                continue;

            int start = j + 1;
            int end = n - 1;

            while (start < end)
            {
                long long sum = a[i];
                sum += a[j];
                sum += a[start];
                sum += a[end];

                if (sum == k)
                {
                    ans.push_back({a[i], a[j], a[start], a[end]});
                    int low = a[start];
                    int high = a[end];

                    while (start < end and a[start] == low)
                        start++;
                    while (start < end and a[end] == high)
                        end--;
                }
                else if (sum > k)
                {
                    end--;
                }
                else
                {
                    start++;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> a{1, 0, -1, 0, -2, 2};
    vector<vector<int>> result = foursum(a, 0);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}