#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{2, 3, 6, 7, 7, 8, 7, 4, 3, 2, 8};
    sort(v.begin(), v.end());
    int target = 7;
    int firstIndex = -1;
    int lastIndex = -1;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target)
        {
            firstIndex = i;
            break;
        }
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == target)
        {
            lastIndex = i;
            break;
        }
    }

    if (firstIndex != -1 && lastIndex != -1)
    {
        cout << "First index: " << firstIndex << endl;
        cout << "Last index: " << lastIndex << endl;
    }
    else
    {
        cout << "Target value not found" << endl;
    }

    return 0;
}