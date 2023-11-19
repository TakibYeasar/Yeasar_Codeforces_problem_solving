
# There are two lines in each input.Each of them contains a single number.It is guaranteed that the numbers are made
# from 0 and 1 only and that their length is same.The numbers may start with 0. The length of each number doesn't exceed 100.
# Write one line — the corresponding answer.Do not omit the leading 0s.


def ultra_fast_mathematician(a, b):
  """Returns the result of the ultra-fast mathematician operation on the two given strings.

  Args:
    a: A string of digits.
    b: A string of digits.

  Returns:
    A string of digits representing the result of the ultra-fast mathematician operation.
  """

  c = ""
  for i in range(len(a)):
    if a[i] == b[i]:
      c += "0"
    else:
      c += "1"
  return c


def main():
  """Solves Codeforces problem 61A: Ultra-Fast Mathematician."""

  a, b = input().split()

  c = ultra_fast_mathematician(a, b)

  print(c)


if __name__ == "__main__":
  main()
