
# Problem link ===>> https://codeforces.com/problemset/problem/110/A

def is_nearly_lucky(n):
  """Returns True if the input number is nearly lucky, False otherwise."""
  count = 0
  for digit in n:
    if digit == '4' or digit == '7':
      count += 1
  return count == 4 or count == 7

n = input()
if is_nearly_lucky(n):
  print('YES')
else:
  print('NO')
