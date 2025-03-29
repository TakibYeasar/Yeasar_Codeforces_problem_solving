
// Problem link ===>> https://codeforces.com/contest/779/problem/D
// submission link ===>> https://codeforces.com/contest/779/submission/312828269

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<int> seq;

bool canConvert(string &s, string &t, int op)
{
    vector<bool> deleted(s.length(), false);

    for (int i = 0; i < min(op, (int)seq.size()); i++)
    {
        deleted[seq[i]] = true;
    }

    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (cnt == t.length())
            break;
        if (!deleted[i] && s[i] == t[cnt])
            cnt++;
    }

    return cnt == t.length();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int n = s.length();
    seq.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
        seq[i]--; // Convert to zero-based index
    }

    // Binary search to find the maximum operations possible
    ll l = 0, r = n;
    while (l < r)
    {
        ll mid = (l + r + 1) / 2;
        if (canConvert(s, t, mid))
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << l << endl;
    return 0;
}
