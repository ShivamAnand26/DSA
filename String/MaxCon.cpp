#include <bits/stdc++.h>
using namespace std;

void MAXConsecutiveChar(string s)
{
    int maxCount = 1;
    char maxChar = s[1];

    int currentCount = 1;
    char currentChar = s[1];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            currentCount++;
        }
        else
        {
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
                maxChar = currentChar;
            }
            currentChar = s[i];
            currentCount = 1;
        }
    }
    if (currentCount > maxCount)
    {
        maxCount = currentCount;
        maxChar = currentChar;
    }

    cout << maxChar;
}

int main()
{
    string a = "geeekk";
    string b = "aaaabbcbbb";
    MAXConsecutiveChar(a);
    cout << endl;
    MAXConsecutiveChar(b);
}