
// Problem link ===>> https://codeforces.com/problemset/problem/1894/B?locale=en
// submission link ===>> https://codeforces.com/contest/1894/submission/241199126

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    for (int num : arr)
    {
        freq[num]++;
    }

    vector<int> frequentNums;
    for (auto &[num, count] : freq)
    {
        if (count > 1)
        {
            frequentNums.push_back(num);
        }
    }

    if (frequentNums.size() < 2)
    {
        cout << "-1" << endl;
        return;
    }

    for (int num : arr)
    {
        if (num == frequentNums[0])
        {
            cout << "2 ";
            frequentNums[0] = -1; // Mark as used
        }
        else if (num == frequentNums[1])
        {
            cout << "3 ";
            frequentNums[1] = -1; // Mark as used
        }
        else
        {
            cout << "1 ";
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
