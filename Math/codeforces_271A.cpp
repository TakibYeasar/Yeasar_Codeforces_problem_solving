
// Problem link ===>> https://codeforces.com/problemset/problem/271/A
// submission link ===>> https://codeforces.com/contest/271/submission/225685773

#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;

        // Get the individual digits of the year.
        int a = year / 1000;
        int b = (year / 100) % 10;
        int c = (year / 10) % 10;
        int d = year % 10;

        // Check if all the digits are unique.
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }

    cout << year << endl;

    return 0;
}
