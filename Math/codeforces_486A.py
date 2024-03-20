
# Problem link ===>> https://codeforces.com/problemset/problem/486/A

def calculating_function(n):
  """Returns the result of the calculating function on the given input number.

  Args:
    n: An integer representing the input number.

  Returns:
    An integer representing the result of the calculating function.
  """

  if n % 2 == 0:
    return n // 2
  else:
    return -(n // 2 + 1)


def main():
  """Solves Codeforces problem 486A: Calculating Function."""

  n = int(input())

  result = calculating_function(n)

  print(result)


if __name__ == "__main__":
  main()
