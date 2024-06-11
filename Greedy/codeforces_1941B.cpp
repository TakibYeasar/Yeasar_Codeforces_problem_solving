
// Problem link ===>> https://codeforces.com/problemset/problem/1941/B
// submission link ===>> https://codeforces.com/contest/1941/submission/263027060

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        bool possible = true;
        for (ll j = 0; j < n - 2; j++)
        {
            if (a[j] < 0)
            {
                possible = false;
                break;
            }

            ll op = a[j];
            a[j] -= op;
            a[j + 1] -= 2 * op;
            a[j + 2] -= op;
        }

        if (possible && a[n - 1] == 0 && a[n - 2] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
