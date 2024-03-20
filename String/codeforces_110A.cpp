
// Problem link ===>> https://codeforces.com/problemset/problem/110/A
// submission link ===>> https://codeforces.com/contest/110/submission/224934565

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}