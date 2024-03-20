
// Problem link ===>> https://codeforces.com/problemset/problem/1924/A
// submission link ===>> https://codeforces.com/contest/1924/submission/246819163

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k, m;
        cin >> n >> k >> m;
        string s;
        cin >> s;

        set<char> st;
        string ans;
        for (int i = 0; i < m; i++){
            st.insert(s[i]);
            if(st.size()==k){
                ans += s[i];
                st.clear();
            }
        }

        if(ans.size()>=n){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;

            char missing;
            for (int j = 0; j < k; j++){
                char ch = (char)('a' + j);
                if(st.count(ch) ==0){
                    missing = ch;
                    break;
                }
            }

            while(ans.size()<n){
                ans += missing;
            }

            cout << ans << endl;
        }
    }
    return 0;
}