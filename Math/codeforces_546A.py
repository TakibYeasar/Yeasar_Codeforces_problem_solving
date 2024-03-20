
# Problem link ===>> https://codeforces.com/problemset/problem/546/A

k, n, w = map(int, input().split())

cost = 0
for i in range(1, w+1):
    cost += i * k

borrowed = cost - n

if borrowed <= 0:
    print(0)
else:
    print(borrowed)


