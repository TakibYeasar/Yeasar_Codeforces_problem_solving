
// Problem link ===>> https://codeforces.com/contest/2173/problem/B
// submission link ===>> https://codeforces.com/contest/2173/submission/352052652

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
const ll NEG_INF = -4e18;
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

        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        ll P = 0;
        ll Q = NEG_INF;

        for (int i = n - 1; i >= 0; --i)
        {
            ll a_i = a[i];
            ll b_i = b[i];

            ll P_next = P;
            ll Q_next = Q;

            ll P_from_R = P_next - a_i;
            ll P_from_B = Q_next - b_i;
            P = max(P_from_R, P_from_B);

            ll Q_from_R = Q_next + a_i;
            ll Q_from_B = P_next + b_i;
            Q = max(Q_from_R, Q_from_B);
        }

        cout << max(P, Q) << endl;
    }
    return 0;
}