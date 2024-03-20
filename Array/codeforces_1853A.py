
# Problem link ===>> https://codeforces.com/problemset/problem/1853/A?locale=en

def dp(n, k):
  dp = [0] * (k + 1)
  dp[0] = 1
  dp[1] = 1
  for j in range(2, k + 1):
    dp[j] = dp[j - 1] + dp[j - 2]
  return dp[k]

def main():
  t = int(input())
  for _ in range(t):
    n, k = map(int, input().split())
    print(dp(n, k))

if __name__ == "__main__":
  main()