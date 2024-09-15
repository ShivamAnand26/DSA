#include <bits/stdc++.h>
using namespace std;

int LongestSubstring(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    return mp.size();
}
int main()
{
    string s = "ABCBC";
    string a = "GEEKSFORGEEKS";
    string b = "AAA";
    cout << LongestSubstring(s) << endl;
    cout << LongestSubstring(a) << endl;
    cout << LongestSubstring(b) << endl;
}