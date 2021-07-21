#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string res = s.substr(1);
    reverse(res);
    cout << s[0];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str;
    cin >> str;
    reverse(str);
    return 0;
}