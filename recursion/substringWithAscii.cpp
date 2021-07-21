#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SubstringswithAscii(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int ascii = s[0];
    string res = s.substr(1);
    SubstringswithAscii(res, ans);
    SubstringswithAscii(res, ans + ch);
    SubstringswithAscii(res, ans + to_string(ascii));
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    cin >> str;
    SubstringswithAscii(str, "");
    return 0;
}