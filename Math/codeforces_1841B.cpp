
// The first line contains one integer t(1≤t≤104) — the number of test cases.
// Each test case consists of two lines.The first line contains one integer q(1≤q≤2⋅105) — the number of queries.
// The second line contains q integers x1,x2,…, xq(0≤xi≤109).
// Additional constraint on the input: the sum of q over all test cases does not exceed 2⋅105).
// For each test case, print one string consisting of exactly q characters. The i-th character of the string
// should be 1 if you appended the integer during the i-th query; otherwise, it should be 0.

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
