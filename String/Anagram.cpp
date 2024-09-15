#include <bits/stdc++.h>
using namespace std;

bool Anagram(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a.size() != b.size())
    {
        return false;
        // break;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    string a = "listen";
    string b = "silent";

    cout << Anagram(a, b) << endl;

    string c = "gram";
    string d = "arm";
    cout << Anagram(c, d);
}