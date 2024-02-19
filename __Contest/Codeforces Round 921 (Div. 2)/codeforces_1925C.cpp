#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkSubsequences(const string &s, int n, int k)
{
    vector<int> lastSeen(k, -1);
    int distinctChars = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int charIndex = s[i] - 'a';
        lastSeen[charIndex] = i;
        distinctChars++;

        if (distinctChars == k)
        {
            int start = 0;
            for (int j = 0; j < n; j++)
            {
                int maxIndex = -1;
                for (int c = 0; c < k; c++)
                {
                    if (lastSeen[c] > maxIndex && lastSeen[c] <= i)
                    {
                        maxIndex = lastSeen[c];
                    }
                }

                if (maxIndex == -1)
                {
                    return false;
                }

                start = maxIndex + 1;
            }

            distinctChars--;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        string s;
        cin >> s;

        if (checkSubsequences(s, n, k))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            // Construct a missing subsequence
            string missing = "";
            for (int i = 0; i < n; i++)
            {
                missing += 'a';
            }
            cout << missing << endl;
        }
    }

    return 0;
}
