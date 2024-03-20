
// Problem link ===>> https://codeforces.com/problemset/problem/59/A
// submission link ===>> https://codeforces.com/contest/59/submission/220993449

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int uppercase = 0;
    int lowercase = 0;

    for (char ch : word)
    {
        if (isupper(ch))
        {
            uppercase++;
        }
        else
        {
            lowercase++;
        }
    }

    if (uppercase > lowercase)
    {
        for (char &ch : word)
        {
            ch = toupper(ch);
        }
    }
    else
    {
        for (char &ch : word)
        {
            ch = tolower(ch);
        }
    }

    cout << word << endl;

    return 0;
}
