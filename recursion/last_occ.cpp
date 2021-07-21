#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if (n == i)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstocc(arr, n, i + 1, key);
}
int lastocc(int arr[], int n, int i, int key)
{
    if(i==n){
        return -1;
    }
    int restarray = lastocc(arr, n, i + 1, key);
    if (restarray != -1)
    {
        return restarray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    cout << lastocc(arr, n, 0, 4) << endl;
    return 0;
}