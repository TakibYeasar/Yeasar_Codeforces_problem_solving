
# Problem link ===>> https://codeforces.com/problemset/problem/158/A

n, k = map(int, input().split())
scores = list(map(int, input().split()))

count = 0
k_score = scores[k - 1]

for score in scores:
    if score >= k_score and score > 0:
        count += 1

print(count)

