
# The only line contains an integer n(1 ≤ n ≤ 1018).Please do not use the % lld specificator to read
# or write 64 - bit numbers in С++.It is preferred to use the cin, cout streams or the % I64d specificator.
# Print on the single line "YES" if n is a nearly lucky number.Otherwise,print "NO"(without the quotes).

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
