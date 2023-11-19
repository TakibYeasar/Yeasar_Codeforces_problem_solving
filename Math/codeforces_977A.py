
# The first line of the input contains two integer numbers n and k(2≤n≤109, 1≤k≤50) — the number from which
# Tanya will subtract and the number of subtractions correspondingly.
# Print one integer number — the result of the decreasing n by one k times.
# It is guaranteed that the result will be positive integer number.

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
