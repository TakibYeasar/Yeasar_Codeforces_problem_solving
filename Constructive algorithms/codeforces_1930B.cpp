
// Problem link ===>> https://codeforces.com/problemset/problem/1930/B
// submission link ===>> https://codeforces.com/contest/1930/submission/261343765

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

        set<ll> st;
        for (ll i = 1; i <= n; i++)
            st.insert(i);

        for (ll i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                cout << *st.begin() << " ";
                st.erase(st.begin());
            }
            else
            {
                cout << *st.rbegin() << " ";
                st.erase(--st.end());
            }
        }

        cout << endl;
    }
    return 0;
}