
// Problem link ===>>https://codeforces.com/contest/2008/problem/C
// submission link ===>>https://codeforces.com/contest/2008/submission/279143279

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        ll length = 1;
        ll diff = 1;

        while (l + diff <= r)
        {
            l += diff;
            diff++;
            length++;
        }

        cout << length << endl;
    }

    return 0;
}