
// Problem link ===>> https://codeforces.com/contest/1922/problem/A
// submission link ===>> https://codeforces.com/contest/1922/submission/242305958

#include <iostream>
#include <string>

using namespace std;

bool canCreateTemplate(const string &a, const string &b, const string &c)
{
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        char chA = a[i], chB = b[i], chC = c[i];
        if (chA != chB)
        {
            if (chC != chA && chC != chB)
            {
                return true;
            }
        }
        else
        {
            if (chC != chA)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

        cout << (canCreateTemplate(a, b, c) ? "YES" : "NO") << endl;
    }

    return 0;
}