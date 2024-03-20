
// Problem link ===>> https://codeforces.com/problemset/problem/136/A
// submission link ===>> https://codeforces.com/contest/136/submission/228041107

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> presents(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int present;
        cin >> present;
        presents[present] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << presents[i] << " ";
    }
    cout << endl;

    return 0;
}
