
// Problem link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/H
// submission link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/submission/312669019

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int isOk(int mid, int target, vector<int> &nums)
{
    if (nums[mid] <= target)
        return 0;
    else
        return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());

    for (auto num : b)
    {
        int l = 0, r = n;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (isOk(mid, num, a) == 0)
                l = mid + 1;
            else
                r = mid;
        }
        cout << l << " ";
    }
    return 0;
}