#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    for (int j = 0; j < i; j++)
    {
        cout << arr[j] << " ";
    }

    return i + 1;
}

int main()
{
    vector<int> v{1, 1, 2, 2, 2, 3, 3};
    int ans = removeDuplicate(v, 7);
    cout << ans;
}