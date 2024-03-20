
# Problem link ===>> https://codeforces.com/problemset/problem/1845/B

def solve():
  t = int(input())
  for _ in range(t):
    xA, yA, xB, yB, xC, yC = map(int, input().split())
    distAB = abs(xA - xB) + abs(yA - yB)
    distAC = abs(xA - xC) + abs(yA - yC)
    distBC = abs(xB - xC) + abs(yB - yC)
    minDist = min(distAB, min(distAC, distBC))
    if minDist == distAB:
      print("1", distAC + distBC - distAB)
    elif minDist == distAC:
      print("2", distAB + distBC - distAC)
    else:
      print("3", distAB + distAC - distBC)

if __name__ == "__main__":
  solve()
