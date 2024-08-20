
// Problem link ===>> https://codeforces.com/contest/2004/problem/C
// submission link ===>>https://codeforces.com/contest/2004/submission/277421348

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());

        ll ans = 0;
        for (ll i = 0; i < n; i += 2)
        {
            if (k >= (a[i] - a[i + 1]))
            {
                k -= (a[i] - a[i + 1]);
            }
            else
            {
                ans += ((a[i] - a[i + 1]) - k);
                k = 0;
            }
        }

        if (n % 2 == 1)
        {
            ans += a.back();
        }
        cout << ans << endl;
    }
    return 0;
}