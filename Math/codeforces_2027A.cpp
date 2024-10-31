
// Problem link ===>> https://codeforces.com/contest/2027/problem/A
// submission link ===>> https://codeforces.com/contest/2027/submission/288499932

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll maxi1 = 0, maxi2 = 0, c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            if (a >= maxi1)
            {
                maxi1 = a;
                c1 = max(c1, b);
            }
            if (b >= maxi2)
            {
                maxi2 = b;
                c2 = max(c2, a);
            }
        }
        cout << 2 * (maxi1 + maxi2) << endl;
    }
    return 0;
}