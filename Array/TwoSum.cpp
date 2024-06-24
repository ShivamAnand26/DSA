#include <bits/stdc++.h>
using namespace std;

// Brute Force Method

// string read(int n, vector<int> book, int target)
// {
//     string s = "No";
//     // Write your code here.
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             // if (i == j)
//             // {
//             //     continue;
//             // }
//             if (book[i] + book[j] == target)
//             {
//                 s = "Yes";
//                 break;
//             }
//         }
//     }
//     return s;
// }

// Optimal Solution

string read(int n, vector<int> book, int target)
{
    int left = 0, right = n - 1;
    string s = "No";
    sort(book.begin(), book.end());

    while (left < right)
    {
        int sum = book[left] + book[right];
        if (sum == target)
        {
            return "Yes";
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return "NO";
}

int main()
{
    vector<int> v{4, 1, 2, 3, 1};
    // vector<int> v{3, 2, 4, 7};
    string result = read(5, v, 5);
    vector<int> result;
    // twoSum(v, 6);
}