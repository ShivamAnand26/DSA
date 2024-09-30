#include <bits/stdc++.h>
using namespace std;

int SumChar(string a, string b)
{
    int cnt = 0;
    for (int i = 0; i < b.length(); i++)
    {
        for (int j = 0; j < a.length(); j++)
        {
            if (b[i] == a[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    string a, b;
    cin >> a >> b;
    int output = SumChar(a, b);
    cout << output << endl;
}