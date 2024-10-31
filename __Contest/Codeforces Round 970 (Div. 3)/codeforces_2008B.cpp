
// Problem link ===>> https://codeforces.com/contest/2008/problem/B
// submission link ===>> https://codeforces.com/contest/2008/submission/284313480

#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Function to check if the grid representation of the string is beautiful
bool isBeautifulGrid(const string &s, ll n, ll k)
{
    // Check first and last rows
    for (ll i = 0; i < k; ++i)
    {
        if (s[i] != '1' || s[n - k + i] != '1')
        {
            return false;
        }
    }

    // Check the inner grid structure
    for (ll i = 1; i < k - 1; ++i)
    {
        // Check first and last characters of the current row
        if (s[i * k] != '1' || s[(i + 1) * k - 1] != '1')
        {
            return false;
        }

        // Check that all the characters in the middle are '0'
        for (ll j = 1; j < k - 1; ++j)
        {
            if (s[i * k + j] != '0')
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll k = sqrt(n);

        // Check if n is a perfect square and grid is beautiful
        if (k * k == n && isBeautifulGrid(s, n, k))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
