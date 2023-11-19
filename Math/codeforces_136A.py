
# The first line contains one integer n(1 ≤ n ≤ 100) — the quantity of friends Petya invited to the party.The second
# line contains n space - separated integers : the i - th number is pi — the number of a friend who gave a gift to
# friend number i.It is guaranteed that each friend received exactly one gift.It is possible that some friends
# do not share Petya's ideas of giving gifts to somebody else. Those friends gave the gifts to themselves.
# Print n space separated integers : the i - th number should equal the number of the friend who gave a gift to friend number i.

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
