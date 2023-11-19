
# The first line of the input contains a single integer n(1 ≤ n ≤ 100 000) — the number of games played.
# The second line contains a string s,consisting of n uppercase English letters 'A' and 'D' — the outcome
# of each of the games.The i - th character of the string is equal to 'A' if the Anton won the i - th game
# If Anton won more games than Danik,print "Anton"(without quotes)in the only line of the output.
# If Danik won more games than Anton,print "Danik"(without quotes)in the only line of the output.
# If Anton and Danik won the same number of games,print "Friendship"(without quotes).

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
