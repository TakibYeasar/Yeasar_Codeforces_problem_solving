
// Problem link ===>> https://codeforces.com/problemset/problem/2107/C
// submission link ===>>

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

        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;

        int pos = -1;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
            {
                pos = i;
                a[i] = -1e13;
            }
        }

        ll mx = 0, curr = 0;
        for (int i = 0; i < n; ++i)
        {
            curr = max(curr + a[i], a[i]);
            mx = max(mx, curr);
        }

        if (mx > k || (mx != k && pos == -1))
        {
            cout << "No\n";
            continue;
        }

        if (pos != -1)
        {
            ll L = 0, R = 0;
            mx = curr = 0;

            for (int i = pos + 1; i < n; ++i)
            {
                curr += a[i];
                mx = max(mx, curr);
            }
            L = mx;

            mx = curr = 0;
            for (int i = pos - 1; i >= 0; --i)
            {
                curr += a[i];
                mx = max(mx, curr);
            }
            R = mx;

            a[pos] = k - L - R;
        }

        cout << "Yes\n";
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " \n"[i + 1 == n];
        }
    }
    
    return 0;
}