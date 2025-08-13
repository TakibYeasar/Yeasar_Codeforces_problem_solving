
// Problem link ===>> https://codeforces.com/contest/2131/problem/C
// submission link ===>> https://codeforces.com/contest/2131/submission/333812191

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
        ll n, k;
        cin >> n >> k;

        vector<ll> A(n), B(n);
        for (ll &x : A)
            cin >> x;
        for (ll &x : B)
            cin >> x;

        unordered_map<ll, ll> cnt;
        for (ll x : A)
        {
            ll r = x % k;
            cnt[min(r, k - r)]++;
        }
        for (ll x : B)
        {
            ll r = x % k;
            cnt[min(r, k - r)]--;
        }

        bool ok = true;
        for (auto &[_, v] : cnt)
        {
            if (v != 0)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}