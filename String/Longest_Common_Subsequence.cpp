#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> s)
{
    string ans = "";
    sort(s.begin(), s.end());
    int n = s.size();
    string first = s[0];
    string last = s[n - 1];

    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] != last[i])
        {
            return ans;
        }
        ans += first[i];
    }
    return ans;
}
int main()
{

    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};

    cout << "Longest common prefix of ['flower', 'flow', 'flight']: "
         << longestCommonPrefix(strs1) << endl;
    cout << "Longest common prefix of ['dog', 'racecar', 'car']: "
         << longestCommonPrefix(strs2) << endl;

    return 0;
}