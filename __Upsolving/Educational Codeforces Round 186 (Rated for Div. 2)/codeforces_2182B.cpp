
// Problem link ===>> https://codeforces.com/contest/2182/problem/B
// submission link ===>> https://codeforces.com/contest/2182/submission/361316104

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
        int a, b;
        cin >> a >> b;

        if (a < b)
            swap(a, b);

        int x = 0, y = 0;
        int ans = 0;
        int cur = 1;

        while (true)
        {
            int newX = y + cur;
            int newY = x;

            if (newX <= a && newY <= b)
            {
                ans++;
                x = newX;
                y = newY;
                cur *= 2;
            }
            else
            {
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}