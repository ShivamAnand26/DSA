#include <bits/stdc++.h>
using namespace std;

int Best_Time_To_Buy_And_Sell(vector<int> &a)
{
    int minl = a[0];
    int profit = 0;
    int n = a.size();

    for (int i = 1; i < n; i++)
    {
        int cost = a[i] - minl;
        profit = max(profit, cost);

        minl = min(minl, a[i]);
    }

    return profit;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int j;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        v.push_back(j);
    }
    int c = Best_Time_To_Buy_And_Sell(v);
    cout << c;
}
