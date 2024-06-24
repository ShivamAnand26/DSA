// Find the number that appears once, and the other numbers twice
#include <bits/stdc++.h>
using namespace std;

// BruteForce Method

// int getSingleElement(vector<int> &a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         int num = a[i];
//         int cnt = 0;
//         for (int j = 0; j < a.size(); j++)
//         {
//             if (a[j] == num)
//             {
//                 cnt++;
//             }
//         }
//         if (cnt == 1)
//         {
//             return num;
//         }
//     }
// }

// Second Method
int getSingleElement(vector<int> &a)
{
    int xorr = 0;
    for (int i = 0; i < a.size(); i++)
    {
        xorr = xorr ^ a[i];
    }
    return xorr;
}
int main()
{
    vector<int> v{1, 1, 2, 3, 3, 4, 4};
    int result = getSingleElement(v);
    cout << result;
}