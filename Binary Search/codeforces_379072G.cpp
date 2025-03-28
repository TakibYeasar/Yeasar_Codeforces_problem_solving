
// Problem link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/G
// submission link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/submission/312742844

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cout.tie(nullptr);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, k;
//         cin >> n >> k;
//         ll cnt = 0;
//         ll x = 1;
//         while (cnt < k)
//         {
//             if (x % n != 0)
//                 cnt++;
//             x++;
//         }
//         cout << x - 1 << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int isOk(ll id, ll k, ll n)
{
    ll position = id - id / n;
    if (position < k)
        return 0;
    else
        return 1;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll l = 0, r = 2 * k + 1;
        while (l < r)
        {
            ll mid = (l + r) / 2;
            if (isOk(mid, k, n) == 0)
                l = mid + 1;
            else
                r = mid;
        }
        cout << l << endl;
    }
    return 0;
}