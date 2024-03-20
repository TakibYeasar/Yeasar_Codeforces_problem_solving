
// Problem link ===>> https://codeforces.com/problemset/problem/1929/C
// submission link ===>> https://codeforces.com/contest/1929/submission/248492318

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long k, x, a;
        cin >> k >> x >> a;

        long long aa = a;
        long long curr = 1;

        for (long long i = 1; i < x; i++)
        {
            long long next = (curr) / (k - 1);
            next++;
            curr += next;
            if (curr > a)
            {
                cout<<"NO"<<endl;
                goto next_testcase;
            }
        }

        a -= curr;
        if (a < 0)
        {
            cout << "NO" << endl;
            goto next_testcase;
        }

        a *= k;
        if (a > aa)
        {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }

    next_testcase:
        continue;
    }

    return 0;
}