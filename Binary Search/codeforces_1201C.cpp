
// Problem link ===>> https://codeforces.com/contest/1201/problem/C
// submission link ===>> https://codeforces.com/contest/1201/submission/312776638

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<ll> arr;
ll n, k;
ll minOpeartions(ll m)
{
    ll totalOp = 0;
    for (int i = n / 2; i < n; i++)
    {
        if (arr[i] < m)
            totalOp += m - arr[i];
    }
    return totalOp;
};

int isOk(ll id)
{
    if (minOpeartions(id) > k)
        return 1;
    return 0;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    ll l = 0, r = 1e9 + 1 + k;
    while (l < r)
    {
        ll mid = (l + r) / 2;
        if (isOk(mid) == 0)
            l = mid + 1;
        else
            r = mid;
    }
    cout << l - 1 << endl;

    return 0;
}