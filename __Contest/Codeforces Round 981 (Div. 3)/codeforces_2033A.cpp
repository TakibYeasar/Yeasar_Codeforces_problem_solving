
// Problem link ===>> https://codeforces.com/contest/2033/problem/A
// submission link ===>>

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        int curr = 0;
        int step = 1;
        bool isSak = true;

        while (true)
        {
            if (isSak)
            {
                curr -= step;
            }
            else
            {
                curr += step;
            }

            if (curr < -n || curr > n)
            {
                if (isSak)
                {
                    cout << "Sakurako" << endl;
                }
                else
                {
                    cout << "Kosuke" << endl;
                }
                break;
            }

            step += 2;
            isSak = !isSak;
        }
    }
    return 0;
};