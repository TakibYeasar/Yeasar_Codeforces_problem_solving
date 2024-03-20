
# Problem link ===>> https://codeforces.com/problemset/problem/136/A

def main():
  """Solves the Codeforces A. Presents problem."""

  n = int(input())

  presents = [None] * (n + 1)

  for i in range(1, n + 1):
    present = int(input())
    presents[present] = i

  for present in presents[1:]:
    print(present, end=" ")
  print()


if __name__ == "__main__":
  main()
