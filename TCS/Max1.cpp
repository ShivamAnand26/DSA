#include <bits/stdc++.h>
using namespace std;

int rowwithMax1s(vector<vector<int>> a, int n, int m)
{
    int max1 = 0;
    int row = 0;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                cnt++;
            }
            // max1=max(max1, cnt);
            if (max1 < max(max1, cnt))
            {
                max1 = max(max1, cnt);
                row = i;
            }
        }
    }
    if (max1 == 0)
    {
        return -1;
    }
    return row;
}

int main()
{
    int n = 4;
    int m = 4;

    /*vector<vector<int>> a = {{1, 1, 1, 1},
                             {0, 1, 0, 1},
                             {0, 0, 0, 0},
                             {1, 1, 1, 1}};*/

    vector<vector<int>> a = {{0, 0, 0, 0},
                             {0, 0, 0, 0},
                             {0, 0, 0, 0},
                             {0, 0, 0, 0}};

    int output = rowwithMax1s(a, n, m);
    cout << output << endl;
}