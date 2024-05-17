// Problem link ===>> https://codeforces.com/problemset/problem/1971/A
// submission link ===>>https://codeforces.com/contest/1971/submission/260282961

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if(x<y || x==y){
            cout << x << " " << y<<endl;
        } else {
            swap(x, y);
            cout << x << " " << y << endl;
        }
    }

    return 0;
}