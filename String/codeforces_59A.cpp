
// The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.
// Print the corrected word s.If the given word s has strictly more uppercase letters, make the word written in the
// uppercase register, otherwise - in the lowercase one.

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
