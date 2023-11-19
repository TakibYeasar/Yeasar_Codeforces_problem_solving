
// The first line contains word s, the second line contains word t.The words consist of lowercase Latin letters.The input data
// do not consist unnecessary spaces.The words are not empty and their lengths do not exceed 100 symbols.
// If the word t is a word s, written reversely, print YES, otherwise print NO.

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
