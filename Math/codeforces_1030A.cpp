
// Problem link ===>> https://codeforces.com/problemset/problem/1030/A
// submission link ===>> https://codeforces.com/contest/1030/submission/225690503

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int easy_count = 0;
    for (int i = 0; i < n; i++)
    {
        int response;
        cin >> response;

        if (response == 0)
        {
            easy_count++;
        }
    }

    if (easy_count == n)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }

    return 0;
}
