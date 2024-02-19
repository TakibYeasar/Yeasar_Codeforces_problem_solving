#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minBurles(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> freq(n + 1, 0); // Count frequency of each value
    for (int a : arr)
    {
        freq[a]++;
    }

    // Choose the most frequent value as target
    int target = max_element(freq.begin(), freq.end()) - freq.begin();

    int cost = 0;
    // Calculate cost for changing values to the target
    for (int i = 1; i <= n; i++)
    {
        if (i != target && freq[i] > 0)
        {
            cost += abs(freq[i]) * (min(i, target) - max(i, target) + 1);
        }
    }

    return cost;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int minCost = minBurles(arr);
        cout << minCost << endl;
    }

    return 0;
}
