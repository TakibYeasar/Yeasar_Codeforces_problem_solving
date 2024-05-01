
# Problem link ===>> https://codeforces.com/problemset/problem/1948/C


def is_valid_arrangement(arr):
  n = len(arr[0])
  x, y = 1, n - 2  # Start from second last element in second row
  while y >= 0:
    if arr[(x + 1) % 2][y - 1] == '>':
      x = (x + 1) % 2
      y -= 1
    elif y >= 2 and arr[x][y - 2] == '>':
      y -= 2
    else:
      return False
  return True


def main():
  t = int(input())
  for _ in range(t):
    n = int(input())
    arr = [list(input()) for _ in range(2)]  # Read both rows as lists

    if arr[1][n - 2] == '<':
      print("NO")
      continue

    if is_valid_arrangement(arr):
      print("YES")
    else:
      print("NO")


if __name__ == "__main__":
  main()
