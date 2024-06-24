// Sort 0's 1's 2's in an array
#include <bits/stdc++.h>
using namespace std;
void sort012(vector<int> arr, int n)
{
    //   Write your code here
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }

    for (int i = 0; i < cnt0; i++)
    {
        arr[i] = 0;
    }

    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        arr[i] = 1;
    }

    for (int i = cnt0 + cnt1; i < n; i++)
    {
        arr[i] = 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 6;
    vector<int> arr{0, 2, 1, 2, 0, 1};
    sort012(arr, n);
    // cout << "After sorting:" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    return 0;
}