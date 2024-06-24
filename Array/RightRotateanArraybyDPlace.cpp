// Right Rotate an Array by D place

#include <bits/stdc++.h>
using namespace std;

// void rotate_right(vector<int> &arr, int k)
// {

//     vector<int> temp;
//     int n = arr.size();
//     int a = n - k;
//     for (int i = 0; i < a; i++)
//     {
//         temp.push_back(arr[i]);
//     }

//     int c = 0;
//     for (int i = a; i < arr.size(); i++)
//     {
//         arr[c] = arr[i];
//         c++;
//     }
//     int j = 0;

//     for (int i = k; i < arr.size(); i++)
//     {
//         arr[i] = temp[j];
//         j++;
//     }
//     // return arr;

//     for (auto it : arr)
//     {
//         cout << it << " ";
//     }
// }

void rotate_right(vector<int> &arr, int k)
{
    int size = arr.size();
    int a = arr.size() - k;
    reverse(arr.begin(), arr.begin() + a);
    reverse(arr.begin() + a, arr.end());
    reverse(arr.begin(), arr.end());
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    int d = 3;
    int n = 7;
    rotate_right(v, 3);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
