
// Problem link ===>> https://codeforces.com/problemset/problem/1973/A
// submission link ===>>https://codeforces.com/contest/1973/submission/261677078

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    for (ll i = 0; i < t; ++i)
    {
        ll p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        if (p1 > p2 || p2 > p3)
        {
            return -1;
        }
        ll sum = p1 + p2 + p3;
        if (sum & 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << min(p1 + p2, sum / 2) << endl;
        }
    }

    return 0;
}
