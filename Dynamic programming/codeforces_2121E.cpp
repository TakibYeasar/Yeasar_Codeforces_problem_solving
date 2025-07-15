
// Problem link ===>> https://codeforces.com/problemset/problem/2121/E
// submission link ===>> https://codeforces.com/contest/2121/submission/328921143

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
template <typename T>
using ordered_set_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--)
    {
        string l, r;
        cin >> l >> r;

        if(l==r){
            cout<<2*l.size()<<endl;
            continue;
        }

        int ptr = 0;
        while (ptr < l.size() && l[ptr] == r[ptr])
            ptr++;
        if (l[ptr] + 1 < r[ptr])
        {
            cout << 2 * ptr << endl;
        }
        else
        {
            int res = 2 * ptr + 1;
            for (int i = ptr + 1; i < l.size(); i++)
            {
                if (l[i] == '9' && r[i] == '0')
                    res++;
                else
                    break;
            }
            cout << res << endl;
        }
    }
    return 0;
}