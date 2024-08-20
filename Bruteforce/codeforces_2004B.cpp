
// Problem link ===>> https://codeforces.com/contest/2004/problem/B
// submission link ===>>https://codeforces.com/contest/2004/submission/277367328

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;

        ll l = max(a, x);
        ll r = min(b, y);

        ll L = min(a, x);
        ll R = max(b, y);

        if (r < l)
        {
            cout << 1 << endl;
        }
        else if (r == l)
        {
            cout << 2 << endl;
        }
        else
        {
            ll ans = 0;

            if (L < l)
            {
                ans++;
            }
            if (r < R)
            {
                ans++;
            }

            ans += (r - l);
            cout << ans << endl;
        }
    }
    return 0;
}