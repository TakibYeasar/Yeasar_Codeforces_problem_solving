
// Problem link ===>> https://codeforces.com/contest/2155/problem/C
// submission link ===>> https://codeforces.com/contest/2155/submission/351616737

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define endl '\n'
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map = tree<
    K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

bool validar(const vector<int> &x, int n, const vector<int> &a)
{
    bool flag = false;
    int visibles = 1;

    for (int i = 2; i <= n; i++)
    {
        if (x[i] == 1)
            visibles++;
    }

    if (visibles == a[1])
    {
        flag = true;

        for (int i = 1; i < n; i++)
        {
            if (x[i] == 1 && x[i + 1] == 1)
                visibles--;
            else if (x[i] == 0 && x[i + 1] == 0)
                visibles++;

            if (a[i + 1] != visibles)
            {
                flag = false;
                break;
            }
        }
    }

    return flag;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        vector<int> sol1, sol2;

        sol1.push_back(0);
        sol2.push_back(0);

        sol1.push_back(0);
        sol2.push_back(1);

        bool flag = true;
        int cont = 0;

        int n;
        cin >> n;

        vector<int> arr(n + 1);
        arr[0] = 0;

        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        for (int j = 1; j < n; j++)
        {
            if (arr[j + 1] - arr[j] > 1)
            {
                flag = false;
                break;
            }

            if (arr[j + 1] - arr[j] == 0)
            {
                sol1.push_back(1 - sol1[j]);
                sol2.push_back(1 - sol2[j]);
            }
            else
            {
                sol1.push_back(sol1[j]);
                sol2.push_back(sol2[j]);
            }
        }

        if (!flag)
        {
            cout << 0 << endl;
            continue;
        }

        if (validar(sol1, n, arr))
            cont++;

        if (validar(sol2, n, arr))
            cont++;

        cout << cont << endl;
    }

    return 0;
}