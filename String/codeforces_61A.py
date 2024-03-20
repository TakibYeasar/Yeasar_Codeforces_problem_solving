
# Problem link ===>> https://codeforces.com/problemset/problem/61/A


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

  a = input()
  b = input()

  c = ultra_fast_mathematician(a, b)

  print(c)


if __name__ == "__main__":
  main()
