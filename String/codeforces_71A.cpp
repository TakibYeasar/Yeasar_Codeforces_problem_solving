
// Problem link ===>> https://codeforces.com/problemset/problem/71/A
// submission link ===>> https://codeforces.com/contest/71/submission/203941218

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after reading n

    for (int i = 0; i < n; i++)
    {
        string word;
        getline(cin, word);

        int length = word.length();

        // Check if the word length is greater than 10
        if (length > 10)
        {
            string abbreviated = word[0] + to_string(length - 2) + word[length - 1];
            cout << abbreviated << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}
