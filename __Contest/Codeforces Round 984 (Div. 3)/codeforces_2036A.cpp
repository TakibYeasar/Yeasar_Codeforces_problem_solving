
// Problem link ===>> https://codeforces.com/contest/2036/problem/A
// submission link ===>> https://codeforces.com/contest/2036/submission/289496256

#include <bits/stdc++.h>
#define ll long long
using namespace std;

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

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool isPerfect = true;
        for (int i = 0; i < n - 1; i++)
        {
            int interval = abs(a[i] - a[i + 1]);
            if (interval != 5 && interval != 7)
            {
                isPerfect = false;
                break;
            }
        }

        if (isPerfect)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}