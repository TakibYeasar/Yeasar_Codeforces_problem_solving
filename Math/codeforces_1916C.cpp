// Masha and Olya have an important team olympiad coming up soon. In honor of this, Masha, for warm-up, suggested playing a game with Olya:
// There is an array a of size n. Masha goes first, and the players take turns. Each move is described by the following sequence of actions:

// ∙ If the size of the array is 1, the game ends.
// ∙ The player who is currently playing chooses two different indices i, j(1≤i,j≤|a|), and performs the following
// operation — removes ai and aj from the array and adds to the array a number equal to ⌊ai+aj2⌋⋅2. In other words, first divides
// the sum of the numbers ai, aj by 2 rounding down, and then multiplies the result by 2.

// Masha aims to maximize the final number, while Olya aims to minimize it.
// Masha and Olya decided to play on each non-empty prefix of the initial array a, and asked for your help.
// For each k=1,2,…,n, answer the following question. Let only the first k elements of the array a be present
// in the game, with indices 1,2,…,k respectively. What number will remain at the end with optimal play by both players?
// Input
// The first line contains an integer t (1≤t≤104) — the number of test cases.
// The first line of each test case contains a single integer n (1≤n≤105) — the size of the array.
// The second line contains n integers a1,a2,…,an (1≤ai≤109) — the array on which Masha and Olya play.
// It is guaranteed that the sum of n over all test cases does not exceed 105.
// Output
// For each test case, output n integers. The k-th of these numbers should be equal to the number that will
// remain at the end with optimal play by both players, on the array consisting of the first k elements of the array a.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        long long ans = 0;
        int even = 0, odd = 0, v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ans += x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
            v = odd / 3;
            if (even == 0 and odd == 1)
            {
                v = 0;
            }
            else if (odd % 3 == 1)
            {
                v = (odd + 2) / 3;
            }
            cout << ans - v << " ";
        }
        cout << '\n';
    }
    return 0;
}