#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(s.length() == 5){
            int count_A = 0, count_B = 0;
            for (char c : s)
            {
                if (c == 'A')
                {
                    count_A++;
                }
                else if (c == 'B')
                {
                    count_B++;
                }
            }

            if (count_A > count_B)
            {
                cout << "A" << endl;
            }
            else if (count_B > count_A)
            {
                cout << "B" << endl;
            }
        }
            
    }
    return 0;
}