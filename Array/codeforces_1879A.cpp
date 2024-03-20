
// Problem link ===>> https://codeforces.com/problemset/problem/1879/A
// submission link ===>> https://codeforces.com/contest/1879/submission/241202726

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin >> n;

        ll cmp1, cmp2;
        cin >> cmp1 >> cmp2;

        bool possible = true;
        for (ll i = 1; i < n; i++)
        {

            ll u1, u2;
            cin >> u1 >> u2;

            if (u1 >= cmp1 && cmp2 <= u2)
            {
                possible = false;
            }
        }

        if (possible)
        {
            cout << cmp1 << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
