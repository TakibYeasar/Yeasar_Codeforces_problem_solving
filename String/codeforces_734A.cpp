
// Problem link ===>> https://codeforces.com/problemset/problem/734/A
// submission link ===>> https://codeforces.com/contest/734/submission/224940292

#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}
