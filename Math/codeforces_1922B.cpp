
// Problem link ===>> https://codeforces.com/problemset/problem/1922/B
// submission link ===>> https://codeforces.com/contest/1922/submission/247627817

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        vector<long long> arr(n + 1, 0);
        for (long long i = 0; i < n; i++)
        {
            long long freq;
            cin >> freq;
            arr[freq]++;
        }
        long long fact = 0;

        long long prev = 0;
        for (long long i = 0; i <= n; i++)
        {
            if (arr[i] >= 3)
            {
                long long mid = (arr[i] * (arr[i] - 1));
                mid *= (arr[i] - 2);
                mid /= 6;
                fact += mid;
            }
            if (arr[i] >= 2)
            {
                long long mid = (arr[i] * (arr[i] - 1));
                mid /= 2;
                fact += (mid * prev);
            }
            prev += arr[i];
        }

        cout << fact << "\n";
    }
    return 0;
}
