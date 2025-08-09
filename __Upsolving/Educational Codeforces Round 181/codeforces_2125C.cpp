
// Problem link ===>> https://codeforces.com/contest/2125/problem/C
// submission link ===>> https://codeforces.com/contest/2125/submission/333154396

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

bool good(ll x){
    return x % 2 != 0 && x % 3 != 0 && x % 5 != 0 && x % 7 != 0;
}

ll get_naive(ll x){
    ll ans = 0;
    for (ll i = 0; i < x; i++){
        if (good(i)){
            ans++;
        }
    }
    return ans;
}

ll get_count(ll r){
    return (r/210) * get_naive(210) + get_naive(r % 210);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        cout << get_count(r + 1) - get_count(l) << endl;
    }
    return 0;
}