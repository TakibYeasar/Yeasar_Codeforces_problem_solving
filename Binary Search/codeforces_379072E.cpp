
// Problem link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/problem/E
// submission link ===>> https://codeforces.com/group/isP4JMZTix/contest/379072/submission/312650360

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<int> priceList;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        priceList.push_back(x);
    }
    sort(priceList.begin(), priceList.end());
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        cout << upper_bound(priceList.begin(), priceList.end(), m) - priceList.begin() << endl;
    }
    return 0;
}