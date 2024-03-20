
// Problem link ===>> https://codeforces.com/problemset/problem/236/A
// submission link ===>> https://codeforces.com/contest/236/submission/209302864

#include <iostream>
#include <set>
using namespace std;

int main()
{
    string username;
    cin >> username;

    // Use a set to count the unique characters
    set<char> distinctChars(username.begin(), username.end());

    // Check if the number of distinct characters is odd
    if (distinctChars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
