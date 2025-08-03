
// Problem link ===>> https://codeforces.com/contest/2130/problem/C
// submission link ===>> https://codeforces.com/contest/2130/submission/332174428

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define endl '\n'
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_set_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 1000010;
ll a[N], b[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
        }

        vector<ll> tag(n + 1, 1), ans;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (i == j)
                    continue;
                if (a[j] <= a[i] && b[i] <= b[j])
                    tag[i] = 0;
            }
            if (tag[i])
                ans.push_back(i);
        }

        cout << ans.size() << endl;
        for (ll i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << (i + 1 == ans.size() ? '\n' : ' ');
        }
    }

    return 0;
}