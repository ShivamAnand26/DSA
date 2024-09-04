#include <bits/stdc++.h>
using namespace std;

void median(vector<int> v)
{

    sort(v.begin(), v.end());

    int n = v.size();
    if (n % 2 == 0)
    {
        int mid = n / 2;
        double median = (v[mid] + (v[mid - 1])) / 2.0;
        cout << median;
    }
    else
    {
        int mid = n / 2;
        cout << v[mid];
    }
}

int main()
{
    vector<int> v1{2, 4, 1, 3, 5}; // Example 1
    median(v1);                    // Output should be 3
    cout << endl;

    vector<int> v2{2, 5, 1, 7}; // Example 2
    median(v2);                 // Output should be 3.5
}