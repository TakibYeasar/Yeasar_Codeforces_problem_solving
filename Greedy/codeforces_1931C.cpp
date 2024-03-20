
// Problem link ===>> https://codeforces.com/problemset/problem/1931/C
// submission link ===>> https://codeforces.com/contest/1931/submission/248103371

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int left = 1;
        int right = 1;
        for (int i = 1; i < n; i++){
            if(a[i] != a[i-1]){
                break;
            }
            left++;
        }
        for (int i = (n-2); i >=0; i--){
            if(a[i] != a[i+1]){
                break;
            }
            right++;
        }

        int sum = 0;
        if(a[0]==a[n-1]){
            sum = min(n, (left+right));
        } else{
            sum = min(n, max(left, right));
        }
        cout << (n - sum) << endl;
    }
    return 0;
}