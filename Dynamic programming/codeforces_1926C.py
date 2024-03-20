
# Problem link ===>> https://codeforces.com/problemset/problem/1926/C

def get_sum(x):
    res = 0
    while x > 0:
        if dp[x] > 0:
            res += dp[x]
            break
        res += x % 10
        x //= 10
    return res


def test_case(tc):
    n = int(input())
    print(dp[n])


def main():
    T = int(input())
    dp = [0] * maxN
    for i in range(1, maxN):
        dp[i] = get_sum(i)
    for i in range(1, maxN):
        dp[i] += dp[i - 1]

    for tc in range(1, T + 1):
        test_case(tc)


if __name__ == "__main__":
    maxN = 2 * 10**5 + 1
    main()
