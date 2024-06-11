
// Problem link ===>> https://codeforces.com/problemset/problem/1985/A
// submission link ===>> https://codeforces.com/contest/1985/submission/265246141

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;

        cout << a << " " << b << endl;
    }
    return 0;
}