
// Problem link ===>> https://codeforces.com/problemset/problem/2050/E
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
        string a, b, c;
        cin >> a >> b>>c;

        int length_a = int(a.size());
        int length_b = int(b.size());

        vector<vector<int>> f(length_a + 1, vector<int>(length_b + 1, INT_MAX));
        f[0][0] = 0;

        for (int i = 0; i <= length_a; i++){
            for (int j = 0; j <= length_b; j++){
                int k = i + j;
                if (i < length_a)
                {
                    f[i + 1][j] = min(f[i + 1][j], f[i][j] + int(a[i] != c[k]));
                }
                if (j < length_b)
                {
                    f[i][j + 1] = min(f[i][j + 1], f[i][j] + int(b[j] != c[k]));
                }
            }
        }
        cout << f[length_a][length_b] << '\n';
    }
    return 0;
}