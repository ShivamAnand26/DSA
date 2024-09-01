#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[5] = {1, 2, 3, 4, 5};
    int d = 2;
    int n = 5;

    // vector<int> ans = rotatearray(v, 2, 5);
    reverse(v, v + n);
    reverse(v, v + d + 1);
    reverse(v + d + 1, v + n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}