// Max Consecutive 1's in the array
#include <bits/stdc++.h>
using namespace std;

// BruteForce Method

int maxcon(vector<int> &a)
{
    int maxn = 0;
    int cnt = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 1)
        {
            cnt++;
            maxn = max(cnt, maxn);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxn;
}

int main()
{
    vector<int> v{1, 1, 0, 1, 1, 1, 0, 1, 1};
    int result = maxcon(v);
    cout << result;
}