
// Problem link ===>> https://codeforces.com/contest/2008/problem/B
// submission link ===>>https://codeforces.com/contest/2008/submission/279155215

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
        string s;
        cin >> s;

        ll k = sqrt(n);

        if (k * k != n)
        {
            cout << "No" << endl;
            continue;
        }

        bool isBeautiful = true;

        for (ll i = 0; i < k; ++i)
        {
            if (s[i] != '1' || s[n - k + i] != '1')
            {
                isBeautiful = false;
                break;
            }
        }

        for (ll i = 1; i < k - 1 && isBeautiful; ++i)
        {
            if (s[i * k] != '1' || s[(i + 1) * k - 1] != '1')
            {
                isBeautiful = false;
                break;
            }

            for (ll j = 1; j < k - 1; ++j)
            {
                if (s[i * k + j] != '0')
                {
                    isBeautiful = false;
                    break;
                }
            }
        }

        if (isBeautiful)
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
