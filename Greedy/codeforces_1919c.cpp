
// Problem link ===>> https://codeforces.com/problemset/problem/1919/C?locale=en
// submission link ===>> https://codeforces.com/contest/1919/submission/241459079

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        int n, val, penalty = 0;
        cin >> n;
        ll sl = INT_MAX, tl = INT_MAX;
        for (ll i = 0; i < n; i++){
            cin >> val;

            if(sl>tl)
                swap(sl, tl);

            if(val<=sl){
                sl = val;
            }
            else if (val <= tl)
            {
                tl = val;
            }
            else
            {
                sl = val;
                penalty++;
            }
        }
        cout << penalty << endl;
    }
    return 0;
}