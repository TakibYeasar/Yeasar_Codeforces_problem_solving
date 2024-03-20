
# Problem link ===>> https://codeforces.com/problemset/problem/977/A

def wrong_subtraction(n, k):
  current = n
  for i in range(k):
    if current % 10 == 0:
      current //= 10
    else:
      current -= 1
  return current

n, k = map(int, input().split())
print(wrong_subtraction(n, k))
