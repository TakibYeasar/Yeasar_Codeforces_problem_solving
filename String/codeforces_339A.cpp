
// Problem link ===>> https://codeforces.com/problemset/problem/339/A
// submission link ===>> https://codeforces.com/contest/339/submission/209301538

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Remove the '+' characters from the string
    s.erase(remove(s.begin(), s.end(), '+'), s.end());

    // Sort the string in non-decreasing order
    sort(s.begin(), s.end());

    // Output the modified string
    cout << s << endl;

    return 0;
}
