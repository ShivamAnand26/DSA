#include <iostream>
using namespace std;
void binarySearch(int arr[], int target, int left, int right)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            cout << mid;
        }

        if (arr[mid] > target)
        {
            right = mid - 1;
        }

        else
        {
            left = mid + 1;
        }
    }
}

int main()
{
    int arr[5] = {1, 4, 5, 6, 7};
    int l = 0;
    int r = 4;
    int x;

    cout << "Enter the Search Element : ";
    cin >> x;

    binarySearch(arr, x, l, r);
}