// Left rotate an array by one

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n)
{
    // Write your code here.
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    vector<int> arr;
    arr = rotateArray(v, 5);

    for (auto it : arr)
    {
        cout << it << " ";
    }
}