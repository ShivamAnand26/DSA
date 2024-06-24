// left rotate an array by d places

#include <bits/stdc++.h>
using namespace std;

// Method 1
//  vector<int> rotateArray(vector<int> arr, int k)
//  {
//      // Write your code here.
//      vector<int> temp;
//      int n = arr.size();
//      for (int i = 0; i < k; i++)
//      {
//          temp.push_back(arr[i]);
//      }

//     for (int i = k; i < arr.size(); i++)
//     {
//         arr[i - k] = arr[i];
//     }
//     int j = 0;

//     for (int i = n - k; i < arr.size(); i++)
//     {
//         arr[i] = temp[j];
//         j++;
//     }
//     return arr;
// }
// int main()
// {
//     vector<int> v{1, 2, 3, 4, 5};
//     vector<int> arr;
//     arr = rotateArray(v, 2);

//     for (auto it : arr)
//     {
//         cout << it << " ";
//     }
// }

// Method 2
int main()
{
    int v[6] = {1, 2, 3, 4, 5, 6};
    int d = 3;
    int n = 6;
    reverse(v, v + n);
    reverse(v, v + d);
    reverse(v + d, v + n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
