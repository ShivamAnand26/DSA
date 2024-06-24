// Second Largest element on the array
// Time Complexity is O(N)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {-2, 1, -4, 3, 5};
    int largest = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // If the array contains positive elements then use this method

    // int slargest = -1;
    // for (int j = 0; j < 5; j++)
    // {
    //     if (arr[j] > slargest && arr[j] != largest)
    //     {
    //         slargest = arr[j];
    //     }
    // }

    // If the arrat contains the negative elements then use this method

    int slargest = INT_MIN;
    for (int j = 0; j < 5; j++)
    {
        if (arr[j] > slargest && arr[j] != largest)
        {
            slargest = arr[j];
        }
    }

    cout << slargest;
}