#include <bits/stdc++.h>
using namespace std;

void ssmallest_slargest(vector<int> arr)
{
    int smallest, ssmallest, slargest, largest;

    slargest = INT_MIN, largest = INT_MIN;
    ssmallest = INT_MAX, smallest = INT_MAX;

    for (int i : arr)
    {
        if (i > largest)
        {
            largest = i;
        }
        if (smallest > i)
        {
            smallest = i;
        }
    }

    for (int i : arr)
    {
        if (i > slargest && i != largest)
        {
            slargest = i;
        }
        if (i < ssmallest && i != smallest)
        {
            ssmallest = i;
        }
    }
    cout << slargest << " " << ssmallest;
}

int main()
{
    vector<int> v{1, 4, 2, 5, 3, 7};
    ssmallest_slargest(v);
}