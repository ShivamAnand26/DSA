// Remove Duplicates element from the Sorted array

#include <bits/stdc++.h>
using namespace std;

// Brute Force Method
//  int main()
//  {
//      int arr[7] = {1, 1, 2, 2, 2, 3, 3};
//      set<int> s;
//      int size = 0;

//     for (int i = 0; i < 7; i++) //Time Complexity is n
//     {
//         s.insert(arr[i]); //Time Complexity is logn
//     }

//     for (auto it : s) //Time complexity is n
//     {
//         size++;
//     }
//     cout << size;

//     //Total Time Complexity is NlogN + N
// }

// Optimal Solution

int main()
{
    int i = 0;
    int arr[7] = {1, 1, 2, 2, 2, 3, 3};

    for (int j = 0; j < 7; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    cout << i + 1;

    // Time Complexity is N.
}