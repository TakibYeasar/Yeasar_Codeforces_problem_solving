
// Problem link ===>> https://codeforces.com/problemset/problem/1957/A
// submission link ===>>

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

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>()); // Sort descending

        ll max_polygons = 0;
        for (ll i = 0; i < n; ++i)
        {
            ll sides = a[i];
            ll count = 0;

            while (i + count < n && a[i + count] == sides)
            {
                ++count; // Count sticks with same length
            }

            if (count >= 3)
            {                      // Check for valid polygon every time
                max_polygons += 1; // Increase for valid polygons
            }

            i += count - 1; // Move to next unique length
        }

        cout << max_polygons << endl;
    }

    return 0;
}
