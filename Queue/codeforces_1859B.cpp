// Each test consists of multiple test cases.The first line contains a single integer t(1≤t≤25000) — the number of test cases.
// The description of test cases follows.
// The first line of each test case contains a single integer n(1≤n≤25000) — the number of arrays in the list.
// This is followed by descriptions of the arrays.Each array description consists of two lines.
// The first line contains a single integer mi(2≤mi≤50000) — the number of elements in the i - th array.
// The next line contains mi integers ai, 1, ai, 2,…, ai, mi(1≤ai, j≤109) — the elements of the i - th array.
// It is guaranteed that the sum of mi over all test cases does not exceed 50000 .
// For each test case,output a single line containing a single integer — the maximum beauty of the list of arrays that Olya can achieve.

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int q;
    cin >> q;

    int overallMin = INT_MAX; // Use INT_MAX for simplicity
    vector<pair<int, int>> minPairs;

    for (int k = 0; k < q; k++)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        priority_queue<int> pq;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pq.push(a[i]);
            if (pq.size() > 2)
            {
                pq.pop();
            }
            overallMin = min(overallMin, a[i]);
        }

        int minOne = pq.top();
        pq.pop();
        int minTwo = pq.top();
        minPairs.push_back({minTwo, minOne});
    }

    long long int sum = 0;
    int currentMin = INT_MAX;
    for (const auto &[minTwo, minOne] : minPairs)
    {
        sum += minOne;
        currentMin = min(currentMin, minOne);
    }

    sum += overallMin;
    sum -= currentMin;
    cout << sum << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
