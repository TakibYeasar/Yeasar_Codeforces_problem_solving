
// Problem link ===>> https://codeforces.com/problemset/problem/2093/E
// submission link ===>> https://codeforces.com/contest/2093/submission/316687909

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define endl '\n'
// Constants
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

vector<int> nums(2e5 + 5, 0);

int isOk(vector<int> &v, int k, int m)
{
    int cnt = 0;
    int cur_mex = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= v.size() + 1)
        {
            nums[v[i]] = 1;
        }

        while (nums[cur_mex])
        {
            cur_mex++;
        }

        if (cur_mex >= m)
        {
            cnt++;
            for (int j = 0; j < min(m + 1, (int)v.size() + 2); j++)
            {
                nums[j] = 0;
            }
            cur_mex = 0;
        }
    }

    for (int j = 0; j < v.size() + 2; j++)
    {
        nums[j] = 0;
    }

    return (cnt >= k) ? 1 : 0;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0;
        int r = 1e9;
        while (r - l > 1)
        {
            int m = (l + r) / 2;
            if (isOk(v, k, m))
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }

        cout << l << endl;
    }
    return 0;
}