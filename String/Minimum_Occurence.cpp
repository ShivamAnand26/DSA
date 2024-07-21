#include <bits/stdc++.h>
using namespace std;

char MinimumOccurence(string &Str)
{
    unordered_map<char, int> mp;

    for (char ch : Str)
    {
        mp[ch]++;
    }

    char result = Str[0];
    int minFreq = INT_MAX;

    for (char ch : Str)
    {
        if (mp[ch] < minFreq)
        {
            minFreq = mp[ch];
            result = ch;
        }
    }
    return result;
}
int main()
{
    string str;
    cin >> str;

    cout << MinimumOccurence(str) << endl;

    return 0;
}