
// Problem link ===>> https://codeforces.com/problemset/problem/112/A
// submission link ===>> https://codeforces.com/contest/112/submission/209300308

#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    // Convert both strings to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Compare the two strings
    int result = str1.compare(str2);

    // Output the result
    if (result < 0)
    {
        cout << "-1" << endl;
    }
    else if (result > 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
