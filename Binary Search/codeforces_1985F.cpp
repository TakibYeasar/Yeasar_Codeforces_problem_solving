
// Problem link ===>> https://codeforces.com/problemset/problem/1985/F
// submission link ===>> https://codeforces.com/contest/1985/submission/327571090

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, n;
        cin >>h>> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<ll> c(n);
        for (ll i = 0; i < n; i++){
            cin >> c[i];
        }

        set<pair<ll, ll>> s;
        for (ll i = 0; i < n; i++)
        {
            s.insert({1, i});
        }

        ll last_turn = 1;

        while(h> 0)
        {
            auto it = s.begin();
            ll turn = it->first;
            ll index = it->second;

            if (turn > last_turn)
            {
                last_turn = turn;
            }

            s.erase(it);

            h -= a[index];
            if (h <= 0)
            {
                cout << last_turn << endl;
                break;
            }

            s.insert({turn + c[index], index});
        }
    }
    return 0;
}