// Second Largest and Second smallest element in the array

#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> arr)
{
    // Write your code here.

    int largest = arr[0];
    int slargest = -1;

    int smallest = arr[0];
    int ssmallest = INT_MAX;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > slargest && arr[j] != largest)
        {
            slargest = arr[j];
        }
    }

    v.push_back(slargest);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < ssmallest && arr[j] != smallest)
        {
            ssmallest = arr[j];
        }
    }

    v.push_back(ssmallest);

    return v;
}

int main()
{
    vector<int> g1 = {2, 1, 4, 3, 5};
    // vector<int> g1;

    // for (int i = 1; i <= 5; i++)
    //     g1.push_back(i);

    vector<int> o = getSecondOrderElements(5, g1);
    for (auto it : o)
    {
        cout << it << " ";
    }
}