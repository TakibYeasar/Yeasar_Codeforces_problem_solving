
// Problem link ===>> https://codeforces.com/problemset/problem/2045/C
// submission link ===>>

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, T;
    cin >> S >> T;

    int n = S.size(), m = T.size();

    // Map to store the maximum right-most occurrence of characters in T
    map<char, int> mp;
    for (int i = m - 2; i >= 0; --i)
    {
        mp[T[i]] = max(mp[T[i]], i);
    }

    int minLength = INT_MAX;
    string result = "-1";

    // Check for the minimum length concatenated substring
    for (int i = 1; i < n; ++i)
    {
        if (mp.find(S[i]) == mp.end())
            continue;

        int currentLength = i + m - mp[S[i]];
        if (currentLength < minLength)
        {
            minLength = currentLength;
            string prefix = S.substr(0, i);
            string suffix = T.substr(mp[S[i]]);
            result = prefix + suffix;
        }
    }

    cout << result << '\n';
    return 0;
}
