
// Problem link ===>> https://codeforces.com/problemset/problem/2004/D
// submission link ===>> https://codeforces.com/contest/2004/submission/278950770

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<string> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll left[n][6];
        ll right[n][6];
        
        map<ll, ll> mp;
        map<string, ll> ind;
        ind["BG"] = 0;
        ind["BR"] = 1;
        ind["BY"] = 2;
        ind["GR"] = 3;
        ind["GY"] = 4;
        ind["RY"] = 5;
        vector<string> colors = {"BG", "BR", "BY", "GR", "GY", "RY"};

        for (int i = 0; i < n; i++)
        {
            mp[ind[a[i]]] = i;
            for (int ch = 0; ch < 6; ch++)
            {
                if (mp.find(ch) != mp.end())
                {
                    left[i][ch] = mp[ch];
                }
                else
                {
                    left[i][ch] = -1;
                }
            }
        }
        mp.clear();

        for (int i = n - 1; i >= 0; i--)
        {
            mp[ind[a[i]]] = i;
            for (int ch = 0; ch < 6; ch++)
            {
                if (mp.find(ch) != mp.end())
                {
                    right[i][ch] = mp[ch];
                }
                else
                {
                    right[i][ch] = -1;
                }
            }
        }

        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            x--;
            y--;

            if (x > y)
            {
                swap(x, y);
            }

            string color_x = a[x];
            string color_y = a[y];

            if ((color_x[0] == color_y[0]) || (color_x[1] == color_y[0]) || (color_x[0] == color_y[1]) || (color_x[1] == color_y[1]))
            {
                cout << abs(x - y) << endl;
            }
            else
            {
                vector<string> checks;
                for (auto &ch : colors)
                {
                    if (ch != color_x && ch != color_y)
                    {
                        checks.push_back(ch);
                    }
                }
                ll ans = INT_MAX;
                for (auto ch : checks)
                {
                    vector<ll> possible_indexes;
                    if (left[x][ind[ch]] != -1)
                    {
                        possible_indexes.push_back(left[x][ind[ch]]);
                    }
                    if (right[x][ind[ch]] != -1)
                    {
                        possible_indexes.push_back(right[x][ind[ch]]);
                    }
                    if (left[y][ind[ch]] != -1)
                    {
                        possible_indexes.push_back(left[y][ind[ch]]);
                    }
                    if (right[y][ind[ch]] != -1)
                    {
                        possible_indexes.push_back(right[y][ind[ch]]);
                    }
                    for (auto &it : possible_indexes)
                    {
                        ll dist = abs(x - it) + abs(y - it);
                        ans = min(ans, dist);
                    }
                }
                if (ans == INT_MAX)
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << ans << endl;
                }
            }
        }
    }
    return 0;
}
