// There are n people on the number line; the i -th person is at point ai and wants to go to point bi.
// For each person, ai<bi, and the starting and ending points of all people are distinct. (That is, all of the 2n
// numbers a1,a2,…,an,b1,b2,…,bn are distinct.)
// All the people will start moving simultaneously at a speed of 1 unit per second until they reach their final point bi.
// When two people meet at the same point, they will greet each other once. How many greetings will there be?
// Note that a person can still greet other people even if they have reached their final point.
// Input
// The first line of the input contains a single integer t (1≤t≤104) — the number of test cases. The description of test cases follows.
// The first line of each test case contains a single integer n (1≤n≤2⋅105) — the number of people.
// Then n lines follow, the i-th of which contains two integers ai and bi (−109≤ai<bi≤109) — the starting and ending positions of each person.
// For each test case, all of the 2n numbers a1,a2,…,an,b1,b2,…,bn are distinct.
// The sum of n over all test cases does not exceed 2⋅105.
// Output
// For each test case, output a single integer denoting the number of greetings that will happen.

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