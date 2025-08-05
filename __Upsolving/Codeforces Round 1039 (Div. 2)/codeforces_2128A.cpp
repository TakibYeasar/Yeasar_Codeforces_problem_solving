
// Problem link ===>> https://codeforces.com/contest/2128/problem/A
// submission link ===>> https://codeforces.com/contest/2128/submission/332373178

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
        ll n, c;
        cin >> n >> c;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());
        ll saved = 0;
        for (ll x : a)
        {
            if (x * (1LL << saved) <= c)
            {
                ++saved;
            }
        }
        cout << n - saved << endl;
    }
    return 0;
}