
// Problem link ===>> https://codeforces.com/problemset/problem/1915/F
// submission link ===>> https://codeforces.com/contest/1915/submission/241941449

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<pair<int, int>> abArray;
//         vector<int> arrayTwo;
//         for (int i = 0; i < n; i++)
//         {
//             int a, b;
//             cin >> a >> b;
//             abArray.push_back({a, b});
//             arrayTwo.push_back(b); // Store y-coordinates separately
//         }

//         sort(abArray.begin(), abArray.end());
//         sort(arrayTwo.begin(), arrayTwo.end()); // Sort y-coordinates

//         long long ans = 0;

//         int j = 0; // Index for arrayTwo
//         for (auto &ab : abArray)
//         {
//             int x = ab.second;

//             int count = 0;
//             while (j < n && arrayTwo[j] < x)
//             {
//                 count++;
//                 j++;
//             }

//             ans += count;
//         }

//         cout << ans << '\n';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        pbds s;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            s.insert(y);
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        long long ans = 0;
        for (auto u : v)
        {
            int x = u.second;
            int y = s.order_of_key(x);
            ans += y;
            s.erase(x);
        }
        cout << ans << '\n';
    }
    return 0;
}