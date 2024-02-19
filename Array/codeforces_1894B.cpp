// Each test contains multiple test cases.The first line contains a single integer t(1≤t≤500)
// — the number of test cases.Each test case is described as follows.
// The first line of each test case contains an integer n(1≤n≤100) — the length of the array a.
// The second line of each test case contains n integers a1, a2,…, an(1≤ai≤100) — the elements of the array a.
// For each test case, print - 1 if there is no solution.Otherwise, print b1, b2,…, bn
// — an array consisting of numbers 1, 2, 3 that satisfies exactly two out of three conditions.
// If there are multiple possible answers, you can print any of them.

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
