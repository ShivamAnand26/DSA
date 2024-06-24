#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j = 4;
    int arr[5] = {2, 3, 5, 8, 7};
    int i = 0;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

// void Reverse_Array(int i, int arr[], int n)
// {
//     if (i >= n / 2)
//     {
//         return;
//     }
//     swap(arr[i], arr[n - i + 1]);
//     Reverse_Array(i + 1, arr, n);
// }
