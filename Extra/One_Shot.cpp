// C++ One Shot

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // If u se only string datatype then it will take the words till the space
    // for eg:-

    // string str;
    // cin >> str;
    // cout << str;

    // But if u use getline function then u can get the whole sentence till the next line
    // for eg:-

    // string std;
    // getline(cin, std);
    // cout << std;

    // C++ STL

    // Pair in c++
    /*pair<int, int>p = {1,3};
    pair<int, pair<int, int>>p={1,{1,3}};

    cout<<p.first<<p.second;
    cout<<p.first<<p.second.first<<p.second.second;

    Pair Array
    pair<int, int> arr[] = {{1,3}, {2,3},{3,4}, { 4,4}};

    */

    // Vector In C++

    vector<int> v;
    v.push_back(2);
    v.emplace_back(5);
    return v[0];
}
