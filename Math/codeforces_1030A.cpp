
// The first line contains a single integer n(1≤n≤100) — the number of people who were asked to give their opinions.
// The second line contains n integers, each integer is either 0 or 1
// .If i- th integer is 0, then i- th person thinks that the problem is easy;
// if it is 1, then i - th person thinks that the problem is hard.
// Print one word : "EASY" if the problem is easy according to all responses,
// or "HARD" if there is at least one person who thinks the problem is hard.
// You may print every letter in any register : "EASY","easy", "EaSY" and "eAsY" all will be processed correctly.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int easy_count = 0;
    for (int i = 0; i < n; i++)
    {
        int response;
        cin >> response;

        if (response == 0)
        {
            easy_count++;
        }
    }

    if (easy_count == n)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }

    return 0;
}
