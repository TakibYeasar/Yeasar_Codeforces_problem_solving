
// Problem link ===>> https://codeforces.com/problemset/problem/1931/A
// submission link ===>> https://codeforces.com/contest/1931/submission/246180400

#include <bits/stdc++.h>
using namespace std;

long long countDigits(long long num)
{
    long long count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

long long countZeroes(long long num)
{
    long long count = 0;
    while (num > 0 && num % 10 == 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int digitSum = 0;
        vector<int> zeroes(n);
        for (int i = 0; i < n; i++)
        {
            digitSum += countDigits(nums[i]);
            zeroes[i] = countZeroes(nums[i]);
        }

        sort(zeroes.begin(), zeroes.end(), greater<int>());

        for (int i = 0; i < n; i += 2)
        {
            digitSum -= zeroes[i];
        }

        if (digitSum >= (m + 1))
        {
            cout << "Sasha" << endl;
        }
        else
        {
            cout << "Anna" << endl;
        }
    }
    return 0;
}