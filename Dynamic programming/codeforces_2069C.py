
# Problem link ===>> https://codeforces.com/problemset/problem/2069/C

MOD = 998244353

def add(x, y):
    x += y
    if x >= MOD:
        x -= MOD
    return x

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        dp = [0] * 4
        dp[0] = 1

        for _ in range(n):
            x = int(input())
            if x == 2:
                dp[x] = add(dp[x], dp[x])
            dp[x] = add(dp[x], dp[x - 1])

        print(dp[3])
        


if __name__ == "__main__":
    main()
