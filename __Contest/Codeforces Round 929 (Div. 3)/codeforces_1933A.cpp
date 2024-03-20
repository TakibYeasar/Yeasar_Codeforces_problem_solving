
// Problem link ===>> https://codeforces.com/contest/1933/problem/A
// submission link ===>> https://codeforces.com/contest/1933/submission/248539424

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

        sort(a.begin(), a.end(), greater<int>());
        int sum = 0;
        for (int i = 0; i < n; i++){
            if(a[i]>0){
                sum += a[i];
            } else{
                sum += -a[i];
            }
        }
        cout << sum<<endl;
    }
    return 0;
}
