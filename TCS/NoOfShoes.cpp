#include <bits/stdc++.h>
using namespace std;

int countshoespair(vector<string> shoes)
{
    int pair = 0;
    unordered_map<int, int> leftCount, rightCount;

    for (const auto &shoe : shoes)
    {
        int size = shoe[0];
        int type = shoe[1];

        if (type == 'l')
        {
            leftCount[size]++;
        }
        else if (type == 'r')
        {
            rightCount[size]++;
        }
    }

    for (const auto &entry : leftCount)
    {
        int size = entry.first;
        int leftShoes = entry.second;
        int rightShoes = rightCount[size];

        pair += min(leftShoes, rightShoes);
    }
    return pair;
}

int main()
{
    int n;
    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v[i] = s;
    }

    int output = countshoespair(v);
    cout << output;
}