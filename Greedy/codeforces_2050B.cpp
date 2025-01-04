
// Problem link ===>> https://codeforces.com/problemset/problem/2050/B
// submission link ===>> https://codeforces.com/contest/2050/submission/299592656

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t; // Number of test cases
    while (t--)
    {
        ll n;
        cin >> n; // Size of the array

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll odd_sum = 0, even_sum = 0;

        // Calculate sums for odd and even indices
        for (ll i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                even_sum += a[i];
            }
            else
            {
                odd_sum += a[i];
            }
        }

        // Calculate counts of odd and even indices
        ll odd_count = n / 2;        // Number of odd indices
        ll even_count = (n + 1) / 2; // Number of even indices

        // Check divisibility and equality of averages
        if ((odd_sum % odd_count != 0) || (even_sum % even_count != 0) ||
            (odd_sum / odd_count != even_sum / even_count))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
