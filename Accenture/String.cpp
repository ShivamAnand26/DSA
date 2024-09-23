/* Input and Output Format:
Input: Two strings (can contain both uppercase and lowercase characters).
Output:
-1 if the first string is lexicographically smaller.
1 if the second string is lexicographically smaller.
0 if both strings are equal irrespective of case.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;

    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 < s2)
    {
        cout << "-1";
    }
    else if (s1 > s2)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}