
// Problem link ===>> https://codeforces.com/problemset/problem/1917/B
// submission link ===>> https://codeforces.com/contest/1917/submission/241487510

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string word;
        cin >> word;

        set<char> st;
        int count = 0;

        for(auto it:word){
            st.insert(it);
            count += st.size();
        }

        cout << count << endl;
    }

    return 0;
}