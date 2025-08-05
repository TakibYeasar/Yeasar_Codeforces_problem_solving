
// Problem link ===>> https://codeforces.com/contest/2128/problem/B
// submission link ===>> https://codeforces.com/contest/2128/submission/332378568

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
template <typename K, typename V>
using ordered_map = tree<
    K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

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

        string ans;
        ll l = 0, r = n - 1;

        for (ll i = 1; i <= n; ++i)
        {
            bool takeLeft;
            if (i % 2 == 1)
            {
                takeLeft = p[l] < p[r];
            }
            else
            {
                takeLeft = p[l] > p[r];
            }

            if (takeLeft)
            {
                ans.push_back('L');
                ++l;
            }
            else
            {
                ans.push_back('R');
                --r;
            }
        }
        cout << ans << endl;
    }
    return 0;
}