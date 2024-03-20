
// Problem link ===>> https://codeforces.com/problemset/problem/1941/D
// submission link ===>> https://codeforces.com/contest/1941/submission/252470027

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m, x;
        cin >> n >> m >> x;

        vector<ll> v(m);
        vector<char> ch(m);
        for (int i = 0; i < m; i++){
            cin >> v[i] >> ch[i];
        }

        set<ll> ans;
        ans.insert(x);
        set<ll> res;
        for (int i = 0; i < m; i++){
            if(ch[i] =='0'){
                set<ll> tans;

                for(auto &it:ans){
                    ll a = it + v[i];

                    if(a>n){
                        a -= n;
                    }

                    tans.insert(a);

                    if(i==m-1){
                        res.insert(a);
                    }
                }
                ans = tans;
            }
            else if (ch[i] == '1')
            {
                set<ll> tans;

                for(auto &it : ans){
                    ll a = it - v[i] + n;

                    if (a > n)
                    {
                        a -= n;
                    }

                    tans.insert(a);

                    if (i == m - 1)
                    {
                        res.insert(a);
                    }
                }
                ans = tans;
            }
            else{
                set<ll> tans;

                for (auto &it : ans)
                {
                    ll a = it + v[i];

                    if (a > n)
                    {
                        a -= n;
                    }

                    tans.insert(a);

                    if (i == m - 1)
                    {
                        res.insert(a);
                    }

                    a = it - v[i] + n;

                    if (a > n)
                    {
                        a -= n;
                    }

                    tans.insert(a);

                    if (i == m - 1)
                    {
                        res.insert(a);
                    }
                }

                ans = tans;
            }
        }

        cout << res.size() << endl;
        for(auto &it : res){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}