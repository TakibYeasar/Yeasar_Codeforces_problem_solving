
# The first line contains a single integer t(1≤t≤100) — the number of testcases.
# The only line of each testcase contains three integers n,k and x(1≤x≤k≤n≤100).
# For each test case, in the first line, print "YES" or "NO" — whether you can take an arbitrary amount of each integer
# from 1 to k,except integer x,so that their sum is equal to n.
# If you can,the second line should contain a single integer m— the total amount of taken integers.The third line should contain m
# integers — each of them from 1 to k, not equal to x,and their sum is n.
# If there are multiple answers,print any of them.

def main():
  t = int(input())

  for _ in range(t):
    n, k, x = map(int, input().split())
    a = list(map(int, input().split()))

    possible = True
    for value in a:
      if value == x:
        possible = False
        break

    if possible:
      print("Yes")
    else:
      print("No")


if __name__ == "__main__":
  main()


