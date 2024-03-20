
// Problem link ===>> https://codeforces.com/problemset/problem/266/B
// submission link ===>> https://codeforces.com/contest/266/submission/241202383

// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     queue<int> queue;
//     int n, patience;

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> patience;
//         queue.push(patience);
//     }

//     int left = 0;

//     while (!queue.empty())
//     {
//         int patience = queue.front();
//         queue.pop();

//         if (patience > 1)
//         {
//             patience--;
//             queue.push(patience);
//         }
//         else
//         {
//             left++;
//         }
//     }

//     cout << left << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int n, t, i, j;
    cin >> n >> t;
    string s;

    for (i = 0; i < n; i++)
    {
        cin >> s;
    }

    for (i = 1; i <= t; i++)
    {

        for (j = 0; j < n - 1; j++)
        {

            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s << endl;

    return 0;
}