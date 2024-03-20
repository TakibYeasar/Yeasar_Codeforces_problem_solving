
# Problem link ===>> https://codeforces.com/problemset/problem/734/A

def anton_and_danik(n, s):
  """Returns the winner of the game, or "Friendship" if it is a tie."""
  anton = 0
  danik = 0
  for char in s:
    if char == 'A':
      anton += 1
    elif char == 'D':
      danik += 1

  if anton > danik:
    return "Anton"
  elif anton < danik:
    return "Danik"
  else:
    return "Friendship"

n = int(input())
s = input()

winner = anton_and_danik(n, s)
print(winner)
