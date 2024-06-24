// Intersection of 2 Arrays
#include <bits/stdc++.h>
using namespace std;

void Intersection(vector<int> &a, vector<int> &b, int n, int m)
{
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            cout << b[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    vector<int> b{2, 3, 5, 6, 7};
    Intersection(v, b, 5, 5);
    // cout << result;
}