
// Problem link ===>> https://codeforces.com/problemset/problem/282/A
// submission link ===>> https://codeforces.com/contest/282/submission/209293482

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;
    string statement;
    for (int i = 0; i < n; i++)
    {
        cin >> statement;

        if (statement == "++X" || statement == "X++")
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}

