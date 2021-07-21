#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void generateAllSubstrings(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string res = s.substr(1);
    generateAllSubstrings(res, ans + ch);
    generateAllSubstrings(res, ans);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    cin >> str;
    generateAllSubstrings(str, "");
    return 0;
}