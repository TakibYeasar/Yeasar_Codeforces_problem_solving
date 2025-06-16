
// Problem link ===>> https://codeforces.com/problemset/problem/2116/B
// submission link ===>> https://codeforces.com/contest/2116/submission/324388983

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define endl '\n'
const int MOD = 998244353;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_set_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll po[100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    po[0] = 1;
    for (int i = 1; i <= 100000; i++)
    {
        po[i] = (2 * po[i - 1]) % MOD;
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> p(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        vector<ll> q(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> q[i];
        }

        vector<ll> posa(n), posb(n);
        for (ll i = 0; i < n; i++)
        {
            posa[p[i]] = i;
            posb[q[i]] = i;
        }

        set<ll> sa, sb;
        vector<ll> ans;

        for (ll i = 0; i < n; i++)
        {
            sa.insert(p[i]);
            sb.insert(q[i]);

            ll x = *sa.rbegin();
            ll y = *sb.rbegin();

            pair<ll, ll> p1 = {x, q[i - posa[x]]};
            pair<ll, ll> p2 = {y, p[i - posb[y]]};
            pair<ll, ll> ansp = max(p1, p2);

            ans.push_back((po[ansp.first] + po[ansp.second]) % MOD);
        }

        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;
    }

    return 0;
}
