
// Problem link ===>> https://codeforces.com/problemset/problem/158/A
// submission link ===>> https://codeforces.com/contest/158/submission/207152901

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    int count = 0;
    int k_score = scores[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= k_score && scores[i] > 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
