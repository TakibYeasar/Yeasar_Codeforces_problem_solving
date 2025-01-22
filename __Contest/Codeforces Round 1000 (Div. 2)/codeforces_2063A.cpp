
// Problem link ===>> https://codeforces.com/contest/2063/problem/A
// submission link ===>>

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l>>r;

        if (l <= 1 && r <= 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << r - l << endl;
        }
    }
    return 0;
}