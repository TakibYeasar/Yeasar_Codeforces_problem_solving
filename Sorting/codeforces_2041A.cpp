
// Problem link ===>> https://codeforces.com/problemset/problem/2041/A
// submission link ===>>


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int visited[] = {a, b, c, d};
        sort(visited, visited + 4);

        for (int i = 1; i <= 5; i++)
        {
            if (!binary_search(visited, visited + 4, i))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
