#include <bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    int ans = n;
    for (int i = n - 1; i > 0; i--)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += ans;
        }
        ans = sum;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int output = Factorial(n);
    cout << output << endl;
}