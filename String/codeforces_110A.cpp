
// The only line contains an integer n(1 ≤ n ≤ 1018).Please do not use the % lld specificator to read
// or write 64 - bit numbers in С++.It is preferred to use the cin, cout streams or the % I64d specificator.
// Print on the single line "YES" if n is a nearly lucky number.Otherwise,print "NO"(without the quotes).

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