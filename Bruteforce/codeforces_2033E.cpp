
// Problem link ===>> https://codeforces.com/problemset/problem/2033/E
// submission link ===>> https://codeforces.com/contest/2033/submission/289032577

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> p[i];
        }

        vector<bool> visited(n + 1, false);
        int result = 0;

        for (int i = 1; i <= n; ++i)
        {
            if (!visited[i])
            {
                int cycle_length = 0;
                int current = i;

                while (!visited[current])
                {
                    visited[current] = true;
                    current = p[current];
                    cycle_length++;
                }

                result += (cycle_length - 1) / 2;
            }
        }

        cout << result << '\n';
    }

    return 0;
}