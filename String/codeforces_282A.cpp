
// The first line contains a single integer n(1 ≤ n ≤ 150) — the number of statements in the programme.
// Next n lines contain a statement each.Each statement contains exactly one operation(++ or --) and
// exactly one variable x(denoted as letter «X»).Thus,there are no empty statements.The operation and the variable can be 
// written in any order.
// Print a single integer — the final value of x.

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

