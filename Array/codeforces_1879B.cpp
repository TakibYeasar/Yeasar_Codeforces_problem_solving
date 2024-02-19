// The first line contains a single integer t(1≤t≤104) — the number of test cases.
// The first line of each test case contains a single integer n(1≤n≤3⋅105).
// The second line contains n integers a1, a2,…, an(1≤ai≤109). The third line contains n integers b1,
// b2,…, bn(1≤bi≤109). The sum of n over all test cases doesn't exceed 3⋅105 .
// For each test case, print a single integer — the minimum possible total cost of putting chips according to the rules.
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        long long h = 0;
        for (int i = 0; i < n; i++)
        {
            h += a[0] + b[i];
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += b[0] + a[i];
        }
        cout << min(h, ans) << "\n";
    }

    return 0;
}