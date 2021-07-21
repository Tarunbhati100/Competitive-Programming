#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDuplicates(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str;
    cin >> str;
    cout << removeDuplicates(str);
    return 0;
}