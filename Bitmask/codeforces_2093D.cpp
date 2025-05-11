
// Problem link ===>> https://codeforces.com/problemset/problem/2093/D
// submission link ===>> https://codeforces.com/contest/2093/submission/319212245

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld = long double
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

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        while (q--)
        {
            string type;
            cin >> type;

            if (type == "->")
            {
                int x, y;
                cin >> x >> y;
                x--, y--;

                long long num = 0;
                for (int i = n - 1; i >= 0; --i)
                {
                    int cur = 1 << i;
                    if (!(x & cur) && !(y & cur))
                        num ^= 0ll << (2 * i);
                    if ((x & cur) && (y & cur))
                        num ^= 1ll << (2 * i);
                    if ((x & cur) && !(y & cur))
                        num ^= 2ll << (2 * i);
                    if (!(x & cur) && (y & cur))
                        num ^= 3ll << (2 * i);
                }
                cout << num + 1 << '\n';
            }
            else
            {
                long long num;
                cin >> num;
                num--;

                int x = 0, y = 0;
                for (int i = n - 1; i >= 0; --i)
                {
                    long long cur = 3ll << (2 * i);
                    if ((num & cur) >> (2 * i) == 0)
                        x ^= 0 << i, y ^= 0 << i;
                    if ((num & cur) >> (2 * i) == 1)
                        x ^= 1 << i, y ^= 1 << i;
                    if ((num & cur) >> (2 * i) == 2)
                        x ^= 1 << i, y ^= 0 << i;
                    if ((num & cur) >> (2 * i) == 3)
                        x ^= 0 << i, y ^= 1 << i;
                }
                cout << x + 1 << ' ' << y + 1 << '\n';
            }
        }
    }

    return 0;
}