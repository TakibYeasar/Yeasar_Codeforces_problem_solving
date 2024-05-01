
// Problem link ===>> https://codeforces.com/problemset/problem/1948/B
// submission link ===>> https://codeforces.com/contest/1948/submission/259011759

#include<bits/stdc++.h>
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

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll curr = 0;
        bool is_valid = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < curr)
            {
                cout << "NO" << endl;
                is_valid = true;
                break;
            }
            else
            {
                ll x = a[i] / 10;
                ll y = a[i] % 10;
                if (x >= curr)
                {
                    if (y >= x)
                    {
                        curr = y;
                    }
                    else
                    {
                        curr = a[i];
                    }
                }
                else
                {
                    curr = a[i];
                }
            }
        }
        if (!is_valid)
            cout << "YES" << endl;
    }
    return 0;
}