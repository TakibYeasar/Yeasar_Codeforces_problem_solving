
// There are two lines in each input.Each of them contains a single number.It is guaranteed that the numbers are made
// from 0 and 1 only and that their length is same.The numbers may start with 0. The length of each number doesn't exceed 100.
// Write one line — the corresponding answer.Do not omit the leading 0s.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    string c = "";
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            c += '0';
        }
        else
        {
            c += '1';
        }
    }

    cout << c << endl;

    return 0;
}
