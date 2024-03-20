
// Problem link ===>> https://codeforces.com/problemset/problem/1841/B
// submission link ===>> https://codeforces.com/contest/1841/submission/209974072

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        int first = -1;
        int last = -1;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            if (flag)
            {
                if (num >= last && num <= first)
                {
                    last = num;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if (first == -1)
                {
                    first = num;
                    last = num;
                    cout << 1;
                }
                else if (num >= last)
                {
                    last = num;
                    cout << 1;
                }
                else if (first >= num)
                {
                    last = num;
                    flag = 1;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }

        cout << endl;
    }

    return 0;
}
