
// Problem link ===>> https://codeforces.com/problemset/problem/1948/A
// submission link ===>> https://codeforces.com/contest/1948/submission/256198560

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n%2==1){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            string ans = "";
            for (int i = 0; i < (n / 2); i++){
                ans += "BAA";
            }
            cout << ans << endl;
        }
    }
    return 0;
}