
// Problem link ===>> https://codeforces.com/contest/2004/problem/A
// submission link ===>> https://codeforces.com/contest/2004/submission/277322375

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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n > 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (abs(a[0] - a[1]) == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}