#include <bits/stdc++.h>
using namespace std;

int PairDivisible(vector<int> a)
{
    int left = 0;
    int right = a.size() - 1;
    int count = 0;
    map<pair<int, int>, bool> mp;

    for (int i = 0; i < a.size() - 1; i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            int sum = a[i] + a[j];
            pair<int, int> p = make_pair(a[i], a[j]);
            if (sum % 2 == 0 && mp[p] != true)
            {
                count++;
                mp[p] = true;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> v{2, 2, 2, 2, 1, 7, 5, 3};
    int ouput = PairDivisible(v);

    cout << ouput << endl;
}