#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(string s, string d, string h, int n)
{
    if (n == 1)
    {
        cout << "moving plate " << n << " from " << s << " to " << d << endl;
        return;
    }
    solve(s, h, d, n - 1);
    cout << "moving plate " << n << " from " << s << " to " << d << endl;
    solve(h, d, s, n - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // your code goes here
    int n = 3;
    string s = "Source";
    string d = "destination";
    string h = "helper";
    solve(s, d, h, n);
    return 0;
}
