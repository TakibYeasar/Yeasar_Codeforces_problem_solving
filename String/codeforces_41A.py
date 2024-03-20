
# Problem link ===>> https://codeforces.com/problemset/problem/41/A

def is_translation_correct(s, t):
  """Returns True if the translation is correct, False otherwise."""
  reversed_s = s[::-1]
  return reversed_s == t

s = input()
t = input()

if is_translation_correct(s, t):
  print("YES")
else:
  print("NO")
