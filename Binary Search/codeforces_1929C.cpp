// Sasha decided to give his girlfriend the best handbag, but unfortunately for Sasha, it is very expensive. Therefore, 
// Sasha wants to earn it. After looking at earning tips on the internet, he decided to go to the casino.

// Sasha knows that the casino operates under the following rules. If Sasha places a bet of y coins (where y is a positive integer), 
// then in case of winning, he will receive y⋅k coins (i.e., his number of coins will increase by y⋅(k−1)). And in case of losing, 
// he will lose the entire bet amount (i.e., his number of coins will decrease by y).

// Note that the bet amount must always be a positive (>0) integer and cannot exceed Sasha's current number of coins.

// Sasha also knows that there is a promotion at the casino: he cannot lose more than x times in a row.

// Initially, Sasha has a coins. He wonders whether he can place bets such that he is guaranteed to win any number of coins. 
// In other words, is it true that for any integer n, Sasha can make bets so that for any outcome that does not contradict 
// the rules described above, at some moment of time he will have at least n coins.

// Input
// Each test consists of multiple test cases. The first line contains a single integer t
// (1≤t≤1000) — the number of test cases. The description of the test cases follows.

// The single line of each test case contains three integers k,x and a (2≤k≤30, 1≤x≤100, 1≤a≤109) — the number of times 
// the bet is increased in case of a win, the maximum number of consecutive losses, and the initial number of coins Sasha has.

// Output
// For each test case, output "YES" (without quotes) if Sasha can achieve it and "NO" (without quotes) otherwise.

// You can output "YES" and "NO" in any case (for example, the strings "yEs", "yes" and "Yes" will be recognized as a positive answer).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k, x, a;
        cin >> k >> x >> a;

        int aa = a;
        int curr = 1;

        for (int i = 1; i < x; i++)
        {
            int next = (curr) / (k - 1);
            next++;
            curr += next;
            if (curr > a)
            {
                cout<<"NO"<<endl; 
            }
        }

        a -= curr;
        if (a < 0)
        {
            cout << "NO" << endl;
        }
        a *= k;
        if (a > aa)
        {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}