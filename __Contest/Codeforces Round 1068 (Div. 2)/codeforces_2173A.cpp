
// Problem link ===>> https://codeforces.com/contest/2173/problem/A
// submission link ===>> https://codeforces.com/contest/2173/submission/352044796

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

        string s;
        cin >> s;

        vector<bool> is_awake(n + 1, false);
        for (ll i = 1; i <= n; ++i)
        {
            if (s[i - 1] == '1')
            {
                ll start_class = i;
                ll end_class = min(n, i + k);
                for (ll j = start_class; j <= end_class; ++j)
                {
                    is_awake[j] = true;
                }
            }
        }

        ll awake = 0;
        for (ll i = 1; i <= n; ++i)
        {
            if (is_awake[i])
            {
                awake++;
            }
        }

        ll sleep = n - awake;

        cout << sleep << endl;
    }
    return 0;
}