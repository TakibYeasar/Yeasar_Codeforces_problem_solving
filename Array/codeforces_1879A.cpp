
//     The first line contains one integer t(1≤t≤100) — the number of test cases.

//     The first line of each test case contains one integer n(2≤n≤100) — the number of athletes.Then n
//     lines follow,
//     the i
//         - th of them contains two integers si and ei(1≤si≤109; 1≤ei≤100) — the strength and the endurance of the i
//         - th athlete.

// For each test case, print the answer as follows: if the answer exists, print one integer — the value of
// w meeting the constraints.The integer you print should satisfy 1≤w≤109 .It can be shown that if the answer exists,
// at least one such value of w exists as well.If there are multiple answers, you can print any of them;
// otherwise, print one integer −1.

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

        ll cmp1, cmp2;
        cin >> cmp1 >> cmp2;

        bool possible = true;
        for (ll i = 1; i < n; i++)
        {

            ll u1, u2;
            cin >> u1 >> u2;

            if (u1 >= cmp1 && cmp2 <= u2)
            {
                possible = false;
            }
        }

        if (possible)
        {
            cout << cmp1 << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
