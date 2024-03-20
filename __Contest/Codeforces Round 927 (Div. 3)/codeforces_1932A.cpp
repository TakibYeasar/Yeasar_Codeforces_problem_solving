
// Problem link ===>> https://codeforces.com/contest/1932/problem/A
// submission link ===>> https://codeforces.com/contest/1932/submission/247087421

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int till = n, ans = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '*' and s[i] == s[i + 1])
            {
                till = i;
                break;
            }
        }

        for (int i = 0; i <= till; i++)
        {
            if (s[i] == '@')
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
