#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> sets;
    for (int i = 0; i < 5; i++)
    {
        int s;
        cin >> s;
        sets.insert(s);
    }

    for (auto it = sets.begin(); it != sets.end(); ++it)
    {
        cout << " " << *it;
    }
}