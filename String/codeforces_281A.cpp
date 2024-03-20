
// Problem link ===>> https://codeforces.com/problemset/problem/281/A
// submission link ===>> https://codeforces.com/contest/281/submission/209301918

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;

    // Capitalize the first letter of the word
    word[0] = toupper(word[0]);

    // Output the modified word
    cout << word << endl;

    return 0;
}
