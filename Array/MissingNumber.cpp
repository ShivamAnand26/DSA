// Missing Nuber in an array
#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int> a, int N)
{
    int sum = N * (N + 1) / 2;
    int asum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        asum = asum + a[i];
    }

    int mnumber = sum - asum;
    return mnumber;
}

int main()
{
    vector<int> a{1, 2, 4, 5};
    int result = MissingNumber(a, 5);
    cout << result;
}