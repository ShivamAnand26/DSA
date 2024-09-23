/*Input Example 1:
Enter a string: abacbd
Output:
First lowercase character that repeats twice: a
Input Example 2:
Enter a string: AbCdeF
Output:
No lowercase character repeats exactly twice.*/

#include <bits/stdc++.h>
using namespace std;

char RecurringChar(const string &s1)
{
    // string s1;
    unordered_set<char> seen;

    for (char ch : s1)
    {
        if (tolower(ch))
        {
            if (seen.find(ch) != seen.end())
            {
                return ch;
            }
            seen.insert(ch);
        }
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
