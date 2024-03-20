
# Problem link ===>> https://codeforces.com/problemset/problem/116/A

def main():
  """Solves the Codeforces problem 116A. Tram."""
  n = int(input())
  c = 0
  m = 0
  for _ in range(n):
    a, b = map(int, input().split())
    c -= a
    c += b
    if c > m:
      m = c
  print(m)

if __name__ == '__main__':
  main()
