
# Problem link ===>> https://codeforces.com/problemset/problem/1931/D?locale=en

def solve():
    n, x, y = map(int, input().split())
    a = list(map(int, input().split()))

    ans = 0
    mp = {}
    for i in range(n):
        rem1 = a[i] % y
        rem2 = (x - a[i] % x) % x

        ans += mp.get(rem1, {}).get(rem2, 0)
        if rem1 not in mp:
            mp[rem1] = {}
        mp[rem1][a[i] % x] = mp[rem1].get(a[i] % x, 0) + 1

    print(ans)


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
