#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string moveToEnd(string s)
{
    if (s.length() == 0)
        return "";

    char ch = s[0];
    string ans = moveToEnd(s.substr(1));
    if (ch == 'x')
    {
        return (ans + ch);
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
    cout << moveToEnd(str);
    return 0;
}