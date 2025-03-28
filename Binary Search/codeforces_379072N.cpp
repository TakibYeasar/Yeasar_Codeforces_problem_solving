
// Problem link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/N
// submission link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/submission/312742757

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int isOk(ll b, ll y)
{
    if (b * b * b < y)
        return 0;
    return 1;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool got = false;
        for (ll a = 1; a * a * a <= x; a++)
        {
            ll y = x - a * a * a;
            ll l = 1, r = 10000;
            while (l < r)
            {
                ll mid = (l + r) / 2;
                if (isOk(mid, y) == 0)
                    l = mid + 1;
                else
                    r = mid;
            }
            if (l * l * l == y)
            {
                cout << "YES" << endl;
                got = true;
                break;
            }
        }
        if (!got)
            cout << "NO" << endl;
    }
    return 0;
}