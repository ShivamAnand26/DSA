#include <bits/stdc++.h>
using namespace std;

char RecurringChar(const string &s1)
{
    // string s1;
    unordered_set<char> seen;

    for (char ch : s1)
    {
        char lowerstr = tolower(ch);

        if (seen.find(lowerstr) != seen.end())
        {
            return ch;
        }
        seen.insert(lowerstr);
    }

    return '\0';
}

int main()
{
    string s1;
    cin >> s1;

    char returns = RecurringChar(s1);
    if (returns != '\0')
    {
        cout << returns << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
