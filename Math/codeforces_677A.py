
# Problem link ===>> https://codeforces.com/problemset/problem/677/A

def main():
  n, h = map(int, input().split())
  friends = list(map(int, input().split()))

  width = 0
  for friend in friends:
    if friend > h:
      width += 2
    else:
      width += 1

  print(width)

if __name__ == '__main__':
  main()
