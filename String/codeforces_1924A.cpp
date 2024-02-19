// You are given two integers n and k along with a string s.

// Your task is to check whether all possible strings of length n that can be formed using the first k
// lowercase English alphabets occur as a subsequence of s. If the answer is NO, you also need to print a string of length n
// that can be formed using the first k lowercase English alphabets which does not occur as a subsequence of s.

// If there are multiple answers, you may print any of them.

// Note: A string a is called a subsequence of another string b if a
// can be obtained by deleting some (possibly zero) characters from b without changing the order of the remaining characters.

// Input
// The first line of input contains a single integer t(1≤t≤105), the number of test cases.

// The first line of each test case contains 3 integers n(1≤n≤26),k(1≤k≤26),m(1≤m≤1000),
// where n and k are the same as described in the input and m is the length of the string s.

// The second line of each test case contains a single string s of length m, comprising only of the first k lowercase English alphabets.

// It is guaranteed that the sum of m and the sum of n over all test cases does not exceed 106.

// Output
// For each test case, print YES if all possible strings of length n that can be formed using the first k lowercase English alphabets occur as a subsequence of s, else print NO.

// If your answer is NO, print a string of length n that can be formed using the first k
// lowercase English alphabets which does not occur as a subsequence of s in the next line.

// You may print each letter of YES or NO in any case (for example, YES, yES, YeS will all be recognized as a positive answer).

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