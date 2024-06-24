// Move Zero At End
#include <bits/stdc++.h>
using namespace std;

// Method 1

// vector<int> moveZeros(int n, vector<int> a)
// {
//     // Write your code here.
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != 0)
//         {
//             temp.push_back(a[i]);
//         }
//     }

//     for (int i = 0; i < temp.size(); i++)
//     {
//         a[i] = temp[i];
//     }
//     int z = temp.size();
//     for (int i = z; i < n; i++)
//     {
//         a[i] = 0;
//     }

//     return a;
// }

// Method 2
vector<int> moveZeros(int n, vector<int> a)
{
    // Write your code here.
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    for (int i = j; j < n; j++)
    {
        a[j] = 0;
    }
    return a;
}

int main()
{
    vector<int> v{1, 0, 0, 4, 5};
    vector<int> arr;
    arr = moveZeros(5, v);

    for (auto it : arr)
    {
        cout << it << " ";
    }
}