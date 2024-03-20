
# Problem link ===>> https://codeforces.com/problemset/problem/50/A

m, n = map(int, input().split())

#  Calculate the number of dominoes that can be placed
area = m * n
dominoes = area / 2

print(dominoes)
