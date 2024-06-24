#include <bits/stdc++.h>
using namespace std;
// bool Avagrado_Number(int n)
// {
//     int sum = 0;
//     int original = n;
//     int cnt = (int)log10(n) + 1;

//     while (n > 0)
//     {
//         int lastDigit = n % 10;
//         n = n / 10;
//         sum = sum + pow(lastDigit, cnt);
//     }
//     return (sum==original);
// }
int main()
{
    int n;
    cin >> n;
    // Avagrado_Number(n);
    int sum = 0;
    int original = n;
    int cnt = (int)log10(n) + 1;

    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        sum = sum + pow(lastDigit, cnt);
    }
    if (sum == original)
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
}