#include <bits/stdc++.h>
using namespace std;

void countString(string s)
{
    map<char, int> mp;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}

string reverseString(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int primeCount(int n)
{
    if (n <= 2)
        return 0;

    vector<bool> isPrime(n, true);
    for (int i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                if (isPrime[j])
                {
                    isPrime[j] = false;
                }
            }
        }
    }
    int primecount = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            primecount++;
        }
    }
    return primecount;
}

int main()
{
    string s = "aabcc";
    countString(s);
    string a = reverseString(s);
    cout << a;
    cout << endl;
    cout << primeCount(0) << endl;
    cout << primeCount(1);
}

bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();

                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}