
// Problem link ===>> https://codeforces.com/problemset/problem/2094/F
// submission link ===>>

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_set_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map = tree<
    K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map_mul = tree<
    K, V, less_equal<K>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> last(m, -1); // Tracks last row

        for (int i = 0; i < n; ++i)
        {
            vector<int> cur(m);
            for (int j = 0; j < m; ++j)
            {
                cur[j] = ((i * m + j) % k) + 1;
            }

            // Check vertical conflicts
            bool need_shift = false;
            for (int j = 0; j < m; ++j)
            {
                if (cur[j] == last[j])
                {
                    need_shift = true;
                    break;
                }
            }

            // Shift right by 1 if needed
            if (need_shift)
            {
                vector<int> shifted(m);
                for (int j = 0; j < m; ++j)
                {
                    shifted[j] = cur[(j + 1) % m];
                }
                cur = shifted;
            }

            for (int j = 0; j < m; ++j)
            {
                cout << cur[j] << " ";
            }
            cout << '\n';

            last = cur;
        }
    }
    return 0;
}