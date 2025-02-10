
# Problem link ===>> https://codeforces.com/problemset/problem/1995/B1

MOD = 10**9 + 7


def pow_mod(x, q, mod):
    if q == 0:
        return 1
    i = pow_mod(x, q // 2, mod)
    if q % 2 == 0:
        return (i * i) % mod
    return (i * i * x) % mod


def solve():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    hs = {}
    for x in a:
        hs[x] = hs.get(x, 0) + 1
    ans = 0
    for x in hs:
        y = hs[x]
        l = min(m // x, y)
        ans = max(ans, l * x)
        if x + 1 not in hs:
            continue
        z = hs[x + 1]
        for i in range(1, y + 1):
            if i * x > m:
                break
            du = m - i * x
            su = min(du // (x + 1), z) * (x + 1) + i * x
            ans = max(su, ans)
    print(ans)


tests = int(input())
for _ in range(tests):
    solve()
