#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 6, 8, 3};
    int n;
    cout << "Enter the Search Element :";
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            cout << i;
        }
        else
        {
            cout << "Element not Present";
        }
    }
}